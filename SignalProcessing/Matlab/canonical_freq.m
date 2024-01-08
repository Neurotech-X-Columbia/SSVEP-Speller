% Canonical Correlation Analysis
% This script uses the CCA method of reducing the data's dimensionality,
% computing coefficients across a range of frequencies and plotting to 
% find peaks.

dtable = readtable("session_01-07-24_520725\data.csv");

Fs = 250;
T = 1/Fs;

channels = [1 6 7];
tstart = 1;   % in seconds
tcutoff = 120; % in seconds

sstart = tstart*Fs;
scutoff = tcutoff*Fs;
allchan = dtable{channels+1, ceil(sstart)+1:floor(scutoff)};
sumdata = sum(allchan, 1);

L = length(sumdata);
tvec = (0:L-1)*T;

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

filtavg = filtfilt(bpfilt, sumdata);

%% Canonical Correlation Analysis
freqs = 5:0.02:30;
coeffsCCA = zeros(length(freqs), 1);

for i = 1:length(freqs)
    curfreq = freqs(i);
    time = (0:L-1) / Fs;
    sineWave = sin(2*pi*curfreq*time);

    [~, ~, r, ~, ~] = canoncorr(filtavg', sineWave');

    coeffsCCA(i) = r;
end

%%  Plot canonical correlation coefficients across frequencies
figure;
plot(freqs, coeffsCCA, '-');
xlabel('Frequency (Hz)');
ylabel('Canonical Correlation Coefficient');
title('Canonical Correlation Coefficients');
grid on;
