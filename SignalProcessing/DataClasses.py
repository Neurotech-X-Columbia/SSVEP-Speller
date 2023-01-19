import matplotlib.pyplot as plt
import mne
import numpy as np
import serial
import time

"""Stream class is outdated; just use Brainflow.
    Container class stores data to use with Plotter and MNE functions."""


class Container:
    def __init__(self, sample_rate, n_channels, data, ch_names, lpass=None, hpass=None):
        """Container initialized with input parameters and processing parameters"""
        self.srate = sample_rate  # Sampling rate in Hz
        self.nchans = n_channels  # Number of channels
        self.ch_names = ch_names  # Names of channels
        self.data = data  # Data with shape (n_chans, n_samples)
        self.lpass = lpass  # Low pass frequency
        self.hpass = hpass  # High pass frequency
        self.mne_info = mne.create_info(self.ch_names, self.srate, 'eeg')
        self.processed_data = data

        self.ch_dct = dict(zip(ch_names, [x for x in range(n_channels)]))  # Converts channel names to indices

    def plot_raw(self, start, end, channel):
        """Plot of unprocessed data in given timeframe"""
        raw_mne = mne.io.RawArray(self.data.copy(), info=self.mne_info)
        time_slc = raw_mne.time_as_index([start, end])
        slc, times = raw_mne[channel, time_slc[0]:time_slc[1]]
        slc = slc[0]

        fig = plt.figure(figsize=(10, 2.5), constrained_layout=True)
        fig.suptitle("Raw Data", fontsize=16)
        ax = fig.add_axes([.1, .2, .85, .6])
        ax.set_ylabel('Potential (μV)')
        ax.set_xlabel('Time (s)')
        ax.plot(times, slc)

        yrng = max(slc)-min(slc)
        ybuff = .15

        ax.set(xlim=(times[0], times[-1]), ylim=(min(slc)-yrng*ybuff, max(slc)+yrng*ybuff))

        return fig

    def plot_processed(self, start, end, channel, lpass=15, hpass=30, eog=False):
        """Plot of processed data in given timeframe"""
        raw_mne = mne.io.RawArray(self.data.copy(), info=self.mne_info)
        raw_mne.filter(l_freq=lpass, h_freq=hpass)
        time_slc = raw_mne.time_as_index([start, end])
        slc, times = raw_mne[channel, time_slc[0]:time_slc[1]]
        slc = slc[0]

        fig = plt.figure(figsize=(10, 2.5), constrained_layout=True)
        fig.suptitle("Processed Data", fontsize=16)
        ax = fig.add_axes([.1, .2, .85, .6])
        ax.set_ylabel('Potential (μV)')
        ax.set_xlabel('Time (s)')
        ax.plot(times, slc)

        yrng = max(slc)-min(slc)
        ybuff = .15

        yrange = (min(slc)-yrng*ybuff, max(slc)+yrng*ybuff)
        ax.set(xlim=(times[0], times[-1]), ylim=yrange)
        self.processed_data = raw_mne

        if eog:
            self.mark_eog_events([channel], ax, yrange)

        return fig

    def mark_eog_events(self, eye_channel_names, ax, yrange):
        """Marks places where EOG events are detected in a particular plot"""
        eog_events = mne.preprocessing.find_eog_events(self.processed_data, ch_name=eye_channel_names)
        locations = eog_events[:, 0]/self.srate

        ax.vlines(locations, yrange[0], yrange[1], colors='r')

    def detect_eog_events(self, eye_channel_names, threshold=None):
        eog_events = mne.preprocessing.find_eog_events(self.processed_data, ch_name=eye_channel_names,
                                                       thresh=threshold)
        return eog_events[:, 0]/self.srate


class Stream:
    STOP_BYTE = bytes.fromhex('C0')
    SCALE_FACTOR = .02235  # microVolts per count
    PACKET_SIZE = 33

    def __init__(self, srate, ch_names, port, nchans=16, baudrate=115200):
        self.srate = srate
        self.nchans = nchans
        self.ch_names = ch_names
        self.mne_info = mne.create_info(self.ch_names, self.srate, 'eeg')
        self.ch_dct = dict(zip(ch_names, [x for x in range(nchans)]))  # Converts channel names to indices
        self.serial = serial.Serial(port, baudrate)

        self.initialize_cyton()

    def initialize_cyton(self):
        print("Resetting Cyton...")
        self.serial.write(b'v')  # Resets Cyton board
        time.sleep(1)

    def start_stream(self):
        print("Starting data stream...")
        self.serial.write(b'b')  # Starts data stream

    def stop_stream(self):
        print("Stopping data stream...")
        self.serial.write(b's')

    def close_port(self):
        self.serial.close()

    def get_sample(self, as_dict=True):
        """Extracts the most recent sample from the serial port"""
        sample = self.serial.read_until(Stream.STOP_BYTE)

        while len(sample) < 33:
            sample += self.serial.read_until(Stream.STOP_BYTE)

        # 'big' = MSB first
        sample_num = int.from_bytes(sample[1:2], 'big')

        if len(sample) != 33:  # First sample invalid due to Daisy/Cyton averaging technique
            return None

        # Channel data sent in 24-bit two's complement format
        raw_counts = [int.from_bytes(sample[start: start+3], 'big', signed=True) for start in range(3, 25, 3)]
        aux_data = [int.from_bytes(sample[start:start+1], 'big', signed=True) for start in range(27, 33)]
        microVolts = [raw * Stream.SCALE_FACTOR for raw in raw_counts]

        if as_dict:
            if sample_num % 2 == 0:
                channels = self.ch_names[8:]  # Daisy data (last 8 channels)
            else:
                channels = self.ch_names[:8]  # Cyton data (first 8 channels)
            return sample_num, dict(zip(channels, microVolts))

        else:
            return sample_num, microVolts

    def collect(self, samples=None, duration=None, write=False, fname="trial"):
        """Collects and writes given number of samples or duration"""
        if not (samples or duration):
            print("Specify either a number of samples to collect or a duration in seconds.")
            return
        if self.nchans != 16:
            print("Must be in sixteen channel mode.")
            return

        if duration:
            print(f"Collecting {duration} seconds of data.")
            samples = int(self.srate*duration)
            data = np.zeros(shape=(self.nchans, samples+1))
        else:
            print(f"Collecting {samples} samples of data.")
            data = np.zeros(shape=(self.nchans, samples+1))

        # Sample 0: invalid
        # Odd samples: Average(Cyton[x], Cyton[x-1])
        # Even samples: Average(Daisy[x], Cyton[x-1])

        self.get_sample()  # Ignore first sample (invalid)
        index = 1
        while index < samples + 1:
            if entry := self.get_sample(as_dict=False):
                byte_count = entry[0]
                if byte_count % 2 == 1:  # Cyton
                    data[:8, index] = entry[1]
                elif byte_count % 2 == 0:  # Daisy
                    data[8:, index] = entry[1]

                index += 1

        # Upsampling
        data = data[:, 1:]  # Remove first sample of all zeroes
        data[8:, 0] = data[8:, 1]
        for point in range(1, data.shape[1]-1):
            if point % 2 == 0:  # Cyton
                data[8:, point] = (data[8:, point-1] + data[8:, point+1]) / 2
            else:  # Daisy
                data[:8, point] = (data[:8, point-1] + data[:8, point+1]) / 2

        if write:
            np.savetxt(f"Recorded\\{fname}.txt", data)

        return data

    def __enter__(self):
        return self

    def __exit__(self, exception_type, exception_value, traceback):
        print("Closing serial port and stopping stream...")
        self.stop_stream()
        self.close_port()
