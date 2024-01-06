"""Headset abstraction for use in main application"""
from brainflow.board_shim import BoardShim, BrainFlowInputParams, BoardIds
from os import path
from time import sleep

import numpy as np


class Headset:
    def __init__(self, window_size, srate, serial_port, board_id=BoardIds.CYTON_DAISY_BOARD):
        """Class to handle starting stream, ending stream, and collecting data"""
        self.serial_port = serial_port
        self.bid = board_id
        self.buf_size = window_size + 1
        self.srate = srate

        self.is_active = False
        self.drows = None
        self.board = None

    def initialize(self):
        """Prepare OpenBCI  for streaming"""
        params = BrainFlowInputParams()
        params.serial_port = self.serial_port
        self.board = BoardShim(self.bid, params)
        self.board.disable_board_logger()
        self.drows = self.board.get_eeg_channels(self.bid)
        self.is_active = True

    def start_stream(self):
        """Start reading data into buffer"""
        if not self.is_active:
            print("Cannot start stream before initializing headset.")
            return

        self.board.prepare_session()
        while not self.board.is_prepared():
            sleep(.5)
        self.board.start_stream(self.buf_size)
        sleep(2)  # wait for stream to stabilize
        self.is_active = True

    def end_stream(self):
        """End stream and cleanup"""
        self.board.stop_stream()
        self.board.release_session()
        self.is_active = False

    def collect(self):
        """Return data currently in the buffer without removing it from the buffer"""
        buffer_count = self.board.get_board_data_count()
        return self.board.get_current_board_data(buffer_count)[self.drows[0]: self.drows[-1]+1]


class SimulatedHeadset:
    def __init__(self, window_size, overlap, datapath):
        """Class to simulate live capture with prerecorded dataset
           window_size: number of samples to process at once (same as chunk_size)
           overlap: how much of the last chunk to include in new chunk as a proportion
           datapath: path to sample data"""
        pathway = datapath
        cwd = path.dirname(path.dirname(path.abspath(__file__)))
        filepath = path.join(cwd, pathway)
        self.data = np.genfromtxt(filepath, delimiter=';', skip_header=True, usecols=(1, 2)).transpose()

        self.chunk_size = window_size  # Chunk size in samples
        self.overlap = overlap  # Fraction of old chunk to include in new chunk
        self.stream = self.chunk_generator()
        self.is_active = True

    def chunk_generator(self):
        """Generator that returns 'newest' chunk"""
        shift = int((1-self.overlap)*self.chunk_size)

        for start in range(0, len(self.data[0]), shift):
            end = min(len(self.data[0]), start+self.chunk_size)

            yield self.data[:, start:end]

    def collect(self):
        """Returns next chunk if possible, otherwise returns 0 array"""
        try:
            return next(self.stream)
        except StopIteration:
            print("Stream ended (processed all data)")
            self.is_active = False
            return np.zeros((1, 1))

    def end_stream(self):
        self.is_active = False


class Processor:
    def __init__(self, states, default_state, *proc_funcs, logfile=None):
        """Class to handle keeping track of current state, running processing functions on new chunks, and updating
        the current state"""
        self.states = states
        self.current = default_state
        self.proc_funcs = proc_funcs
        self.state_dict = {}

        if logfile:  # Will log the result of analysis on every chunk
            self.log = open(logfile, 'w')
            self.logging = True
        else:
            self.logging = False

    def process_chunk(self, data):
        """Runs every processing function on data"""
        for state in self.states:
            self.state_dict[state] = 0

        for func in self.proc_funcs:
            self.state_dict[func(data)] += 1

        self.update_state()

    def update_state(self):
        """Implements majority rules to determine new state"""
        state_counts = list(zip(self.states, [self.state_dict[st] for st in self.states]))
        state_counts.sort(key=lambda x: x[1])

        self.current = state_counts[-1][0]

    def log_change(self, start, end, new_state, srate=250):
        """Saves new state in a log file"""
        self.log.write(f"[{round(start/srate, 7)}s ({start} samples) \t {round(end/srate, 7)}s ({end} samples)]\n")
        self.log.write(f"{new_state}\n")

    def get_state(self):
        return self.current

    def close_log(self):
        if self.logging:
            self.log.close()


class BufferSizeException(Exception):
    def __init__(self, message):
        self.message = message

    def __str__(self):
        return self.message
