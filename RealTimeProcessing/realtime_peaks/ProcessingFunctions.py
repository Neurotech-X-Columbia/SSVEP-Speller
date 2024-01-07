import mne.preprocessing

import numpy as np
from scipy.signal import butter, filtfilt


def find_peak(data, fs=250, target_freqs=(8, 12, 18), threshold=1.5):
    """Accepts data and returns peak frequency if top magnitude is strongly within threshold Hz"""
    channels = np.array([7, 8])

    # Prepare data
    data = data[channels-1, :]
    data = np.mean(data, axis=0)
    L = len(data)

    if L < fs*10:
        return "No stimulus (weak peak)"

    # Create filter
    SbF1, PbF1, PbF2, SbF2 = 5, 5.5, 50, 50.5
    b, a = butter(N=10, Wn=[PbF1, PbF2], btype='band', fs=fs)

    # Apply bandpass and transform
    filtavg = filtfilt(b, a, data)
    norm_fft = np.fft.fft(filtavg)

    # Calculate PSD
    norm_fft = norm_fft[:L // 2 + 1]
    psdx = (1 / (fs * L)) * np.abs(norm_fft) ** 2
    psdx[1:-1] = 2 * psdx[1:-1]
    freq = np.arange(0, fs / 2, fs / L)

    # Find peaks
    peaks, mags = mne.preprocessing.peak_finder(psdx)
    mags = np.round(mags, 2)

    peak_list = np.round(list(zip(freq[peaks], mags)), 2)
    sorted_peaks = list(sorted(peak_list, key=lambda x: -x[1]))

    print(f"Top Peaks {[list(s) for s in sorted_peaks[:8]]}")

    if sorted_peaks[0][1] <= 50:
        return "No stimulus (weak peak)"
    for freq in target_freqs:
        peak = sorted_peaks[0][0]
        if abs(freq - peak) <= threshold:
            return f"{freq} Hz"
    return "No stimulus (wrong peak)"
