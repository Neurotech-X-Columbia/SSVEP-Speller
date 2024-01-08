% Multi-frequency Analysis
% This script uses the channel average method of reducing dimensionality,
% computing a transform and PSD for a given set of channels and a given
% section of a data session where peak frequency depends on time.
% It also computes and plots the STFT of the entire session.

dtable = readtable("session_01-07-24_364323\data.csv");

Fs = 250;
T = 1/Fs;

channels = [1 6 7];
tstart = 1;    % seconds    
tcutoff = 60;  % seconds

sstart = tstart*Fs;
scutoff = tcutoff*Fs;

%% Average all good channels
allchan = dtable{channels+1, :};
avgdata = mean(allchan, 1);
normavg = avgdata - mean(avgdata);
truncnorm = normavg(ceil(sstart)+1:floor(scutoff));

L = length(truncnorm);
tvec = (0:L-1)*T;

%% Zero-phase Bandpass FIR Filter (5-50 Hz 80 dB attenuation)
SbF1 = 5;
PbF1 = 5.5;
PbF2 = 30;
SbF2 = 30.5;
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

% freqz(bpfilt.Coefficients, 1, [], Fs);

%% Processing (Truncated signal for PSD, full signal for STFT)
filtavgtrunc = filter(bpfilt, truncnorm);
filtavg = filter(bpfilt, normavg(ceil(sstart)+1:end));

%% Plot normalized channel average
figure
subplot(3, 1, 1)
plot(tstart + tvec, filtavgtrunc);
grid
title("Filtered Channel Average")
xlabel("Time (s)")

%% FFT of normalized averaged filtered data
norm_fft = fft(filtavgtrunc);
norm_shift = fftshift(norm_fft);
subplot(3, 1, 2)
plot(Fs/L*(-L/2:L/2-1), abs(norm_shift))
grid
title("|FFT(processed)|")
xlabel("Frequency (Hz)")
ylabel("Magnitude")

%% PSD
norm_fft = norm_fft(1:L/2+1);
psdx = (1/(Fs*L)) * abs(norm_fft).^2;
psdx(2:end-1) = 2*psdx(2:end-1);
freq = 0:Fs/L:Fs/2;

subplot(3, 1, 3)
minProm = 35;

pdb = pow2db(psdx);

[TF, P] = islocalmax(pdb, MinProminence=minProm);
plot(freq, pdb, freq(TF), pdb(TF), 'r*')
grid on
title("Periodogram Using FFT")
xlabel("Frequency (Hz)")
ylabel("Power/Frequency (dB/Hz)")

%% STFT
window_length = 6;  % window length in seconds
wls = floor(window_length * Fs);
overlap = 1; % overlap in seconds
ols = floor(overlap * Fs);

figure
stft(filtavg, Fs, Window=kaiser(wls, 5), ...
     OverlapLength=ols, FFTLength=floor(wls*1.25));
