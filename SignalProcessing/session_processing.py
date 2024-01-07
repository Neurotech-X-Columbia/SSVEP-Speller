import matplotlib.pyplot as plt
import mne.preprocessing
import numpy as np
import os

from scipy.signal import ellip, sosfiltfilt

cwd = os.getcwd()
sesname = "session_01-07-24_520725"
dpath = os.path.join(os.getcwd(), "Data", sesname, "data.csv")
dtable = np.loadtxt(dpath)

Fs = 250
T = 1 / Fs

channels = [1, 6, 7]
tstart = 35  # seconds
tcutoff = 75  # seconds

sstart = int(tstart * Fs)
scutoff = int(tcutoff * Fs)

# Average all good channels (channels 2 and 6 (index 3 and 7) bad)
allchan = dtable[channels, :]
avgdata = np.mean(allchan, axis=0)
normavg = avgdata - np.mean(avgdata)
truncnorm = normavg[sstart + 1: scutoff]

L = len(truncnorm)
tvec = np.arange(0, L) * T

# Zero-phase Bandpass FIR Filter (5-30 Hz 80 dB attenuation)
SbF1, PbF1, PbF2, SbF2 = 5, 5.5, 30, 30.5
SbAtt, PbRipple = 80, 1

sos = ellip(10, PbRipple, SbAtt, [PbF1, PbF2], 'bandpass',
            output='sos', fs=Fs, )

# Processing (Truncated signal for PSD, full signal for STFT)
filtavgtrunc = sosfiltfilt(sos, truncnorm)
filtavg = sosfiltfilt(sos, normavg[sstart + 1:])

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
