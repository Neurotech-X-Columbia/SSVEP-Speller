% Single-Channel Frequency Analysis
% This script reads in data, normalizes and filters for a given channel,
% then computes a transform and PSD

dtable = readtable("session_01-07-24_520725\data.csv");

Fs = 250;
T = 1/Fs;

channel = 1;   % Electrodes 1-8 (indexes 2-9)
tstart = 1;   % in seconds
tcutoff = 60; % in seconds

sstart = tstart*Fs;
scutoff = tcutoff*Fs;
data = dtable{channel+1, ceil(sstart)+1:floor(scutoff)};

L = length(data);
tvec = (0:L-1)*T;

%% Plot original signal
figure(1)
subplot(3, 2, 1)
plot(tstart + tvec, data)
grid
title("Raw Data")
xlabel("Time (s)")
ylabel("Potential (\muV)")

%% FFT of raw data
raw_fft = fft(data);
raw_shift = fftshift(raw_fft);
subplot(3, 2, 2)
plot(Fs/L*(-L/2:L/2-1), abs(raw_shift))
grid
title("|FFT(raw data)|")
xlabel("Frequency (Hz)")
ylabel("Magnitude")

%% Normalized raw data
normdata = data - mean(data);
% normdata = normalize(data);

%% FFT of Normalized Data
subplot(3, 2, 4)
norm_fft = fft(normdata);
norm_shift = fftshift(norm_fft);
plot(Fs/L*(-L/2:L/2-1), abs(norm_shift))
grid
title("|FFT(normalized data)|")
xlabel("Frequency (Hz)")
ylabel("Magnitude")

%% Zero-phase Bandpass FIR Filter (5-50 Hz 80 dB attenuation)
SbF1 = 5;
PbF1 = 5.5;
PbF2 = 50;
SbF2 = 50.5;
SbAtt = 80;
PbRipple = 1;

bpfilt = designfilt('bandpassfir', ...
    StopbandFrequency1=SbF1, ...
    PassbandFrequency1=PbF1, ...
    PassbandFrequency2=PbF2, ...
    StopbandFrequency2=SbF2, ...
    StopbandAttenuation1=SbAtt, ...
    PassbandRipple=1, ...
    StopbandAttenuation2=SbAtt, ...
    SampleRate=Fs, ...
    DesignMethod='equiripple');

% figure(3);
% freqz(bpfilt.Coefficients, 1, [], Fs);

% filtavg = filtfilt(bpfilt, normdata);
filtavg = filter(bpfilt, normdata);

%% Plot filtered data time-domain
figure(1);
subplot(3, 2, 3)
plot(tstart + tvec, filtavg);
grid
title("Normalized and Filtered Data")
xlabel("Time (s)")

%% Plot filtered FFT
norm_fft = fft(filtavg);
norm_shift = fftshift(norm_fft);
subplot(3, 2, [5 6])
plot(Fs/L*(-L/2:L/2-1), abs(norm_shift))
grid
title("|FFT(normalized and filtered)|")
xlabel("Frequency (Hz)")
ylabel("Magnitude")

%% PSD
minProm = 40;

figure(2);
norm_fft = norm_fft(1:L/2+1);
psdx = (1/(Fs*L)) * abs(norm_fft).^2;
psdx(2:end-1) = 2*psdx(2:end-1);
freq = 0:Fs/L:Fs/2;

pdb = pow2db(psdx);

[TF, P] = islocalmax(pdb, MinProminence=minProm);
plot(freq, pdb, freq(TF), pdb(TF), 'r*')

grid on
title("Periodogram Using FFT")
xlabel("Frequency (Hz)")
ylabel("Power/Frequency (dB/Hz)")