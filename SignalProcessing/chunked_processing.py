import matplotlib.pyplot as plt
import mne.preprocessing
import numpy as np
import os

from scipy.signal import ellip, sosfiltfilt, windows

"""
520725 - 12 Hz YouTube | 1 6 7 | 11.96 Hz peak using all 120 seconds
429963 - 15 Hz YouTube | 1 6 7 | 14.97 Hz peak using all 120 seconds
"""

cwd = os.getcwd()
sesname = "session_01-07-24_520725"
dpath = os.path.join(os.getcwd(), "Data", sesname, "data.csv")
dtable = np.loadtxt(dpath)

Fs = 250
T = 1 / Fs

channels = [5, 8]
tstart = 0  # seconds
tcutoff = 60  # seconds

sstart = int(tstart*Fs)
scutoff = int(tcutoff*Fs)

# Extract data
alltrunc = dtable[channels, sstart: scutoff]
data_length = alltrunc.shape[1]

# Chunk data
chunk_length = 20  # seconds
overlap = 5  # seconds
chunk_count = (tcutoff-tstart-chunk_length)//overlap

soverlap = overlap*Fs
sstarts = np.arange(start=sstart, stop=scutoff, step=soverlap)
slength = chunk_length*Fs

chunks = [alltrunc[:, s:min(s+slength, data_length-1)] for s in sstarts]
times = [(round(s/Fs, 2), round(min(s+slength, data_length-1)/Fs, 2)) for s in sstarts]

# Create filter
SbF1, PbF1, PbF2, SbF2 = 4.5, 5.0, 30, 30.5
SbAtt, PbRipple = 80, 1


sos = ellip(10, PbRipple, SbAtt, [PbF1, PbF2], 'bandpass',
            output='sos', fs=Fs)

for num, c in enumerate(chunks):
    L = c.shape[1]
    # Average across channels and normalize
    avgdata = np.mean(c, axis=0)
    normavg = avgdata - np.mean(avgdata)

    windowed = normavg*windows.hamming(L, sym=False)

    # Apply bandpass and transform
    filtavg = sosfiltfilt(sos, windowed)
    norm_fft = np.fft.fft(filtavg)
    norm_shift = np.fft.fftshift(norm_fft)

    # Calculate PSD
    norm_fft = norm_fft[:L//2+1]
    psdx = (1/(Fs*L))*np.abs(norm_fft)**2
    psdx[1:-1] = 2*psdx[1:-1]
    freq = np.arange(0, Fs/2, Fs/L)

    # Find peaks
    peak_thresh = (1/4)*(max(psdx)-min(psdx))

    peaks, mags = mne.preprocessing.peak_finder(psdx, thresh=peak_thresh)
    mags = np.round(mags, 2)

    peak_list = np.round(list(zip(freq[peaks], mags)), 2)
    sorted_peaks = list(sorted(peak_list, key=lambda x: -x[1]))
    no_mags = [s[0] for s in sorted_peaks]

    print(f"{round(times[num][0], 2)}-{round(times[num][1], 2)}s: Top Peaks {no_mags[:]}")
