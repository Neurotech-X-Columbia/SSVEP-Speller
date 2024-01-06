import matplotlib.pyplot as plt
import mne.preprocessing
import numpy as np
import os

from scipy.signal import butter, filtfilt

cwd = os.getcwd()
sesname = "session_01-04-24_52872"
dpath = os.path.join(os.getcwd(), "Data", sesname, "data.csv")
dtable = np.loadtxt(dpath)

Fs = 250
T = 1 / Fs

# Best channels: 7, 8
# Bad channels: 2, 6
channels = [5, 8]
tstart = 10  # seconds
tcutoff = 60  # seconds

sstart = int(tstart * Fs)
scutoff = int(tcutoff * Fs)

# Average all good channels (channels 2 and 6 (index 3 and 7) bad)
allchan = dtable[channels, :]
avgdata = np.mean(allchan, axis=0)
normavg = avgdata - np.mean(avgdata)
truncnorm = normavg[sstart + 1: scutoff]

L = len(truncnorm)
tvec = np.arange(0, L) * T

# Zero-phase Bandpass FIR Filter (5-50 Hz 80 dB attenuation)
SbF1, PbF1, PbF2, SbF2 = 5, 5.5, 50, 50.5
SbAtt, PbRipple = 80, 1

b, a = butter(N=10, Wn=[PbF1, PbF2], btype='band', fs=Fs)

# Processing (Truncated signal for PSD, full signal for STFT)
filtavgtrunc = filtfilt(b, a, truncnorm)
filtavg = filtfilt(b, a, normavg[sstart + 1:])

# Plot normalized channel average
plt.figure()
plt.subplot(3, 1, 1)
plt.plot(tstart + tvec, filtavgtrunc)
plt.grid()
plt.title("Filtered Channel Average")
plt.xlabel("Time (s)")

# FFT of normalized averaged filtered data
norm_fft = np.fft.fft(filtavgtrunc)
norm_shift = np.fft.fftshift(norm_fft)
plt.subplot(3, 1, 2)
plt.plot(Fs / L * np.arange(-L / 2, L / 2), np.abs(norm_shift))
plt.grid()
plt.title("|FFT(processed)|")
plt.xlabel("Frequency (Hz)")
plt.ylabel("Magnitude")

# PSD
norm_fft = norm_fft[: L//2+1]
psdx = (1 / (Fs * L)) * np.abs(norm_fft) ** 2
psdx[1:-1] = 2 * psdx[1:-1]
freq = np.arange(0, Fs / 2, Fs / L)
plt.subplot(3, 1, 3)
plt.plot(freq, 10 * np.log10(psdx))
plt.grid()
plt.title("Periodogram Using FFT")
plt.xlabel("Frequency (Hz)")
plt.ylabel("Power/Frequency (dB/Hz)")

peaks, mags = mne.preprocessing.peak_finder(psdx)
mags = np.round(mags, 2)
print(f"Peaks: {sorted(list(zip(freq[peaks], mags)), key=lambda x: -x[1])}")

plt.show()
