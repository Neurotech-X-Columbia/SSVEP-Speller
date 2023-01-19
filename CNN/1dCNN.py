# Required directory strcuture
"""
/path_to_dir/
├── BL64sec_1.csv
├── BL64sec_2.csv
├── BL64sec_3.csv
├── BL64sec_4.csv
├── BL64sec_5.csv
├── BM64sec_1.csv
├── BM64sec_2.csv
├── BM64sec_3.csv
├── BM64sec_4.csv
├── BR64sec_1.csv
├── BR64sec_2.csv
├── BR64sec_3.csv
├── BR64sec_4.csv
├── BR64sec_5.csv
├── TL64sec_1.csv
├── TL64sec_2.csv
├── TL64sec_3.csv
├── TL64sec_4.csv
├── TL64sec_5.csv
├── TL64sec_6.csv
├── TR64sec_1.csv
├── TR64sec_2.csv
├── TR64sec_3.csv
└── TR64sec_4.csv

"""

import numpy as np
import pandas as pd
import os


import scipy
from scipy import signal


#1-d cnn model
import tensorflow as tf
from keras.models import Sequential
from keras.layers import Dense, BatchNormalization
from keras.layers import Flatten
from keras.layers.convolutional import Conv1D
from keras.layers.convolutional import MaxPooling1D




X = np.zeros(shape = (0, 16, 8001))
Y_raw = np.zeros(shape = (0,))

base_dir = "/content/"


def process(csv_path):
  curr_data = np.genfromtxt(csv_path, delimiter=',')
  #curr_data = curr_data[15 :, :] # use this if only want to use 2 channels (15 and 16)
  curr_data = curr_data[1:17] # using 16 channels for now
  curr_data = curr_data[np.newaxis, ...]
  return curr_data



for file in os.listdir(base_dir):
  if "csv" in file:
    curr_data = process(base_dir + file)
    X = np.append(X, curr_data, axis = 0)

    if "BL" in file:
      Y_raw = np.append(Y_raw, (1,), axis = 0)
    if "BR" in file:
      Y_raw = np.append(Y_raw, (2,), axis = 0)
    if "TL" in file:
      Y_raw = np.append(Y_raw, (3,), axis = 0)
    if "TR" in file:
      Y_raw = np.append(Y_raw, (4,), axis = 0)
    if "BM" in file:
      Y_raw = np.append(Y_raw, (5,), axis = 0)

s = pd.DataFrame(Y_raw)
Y  = pd.get_dummies(s[0]).to_numpy() #one-hot encode
# X and Y will be numpy arrays now, with raw data, Y is one-hot encoded, Y_raw is non one-hot encoded

# Applying PSD on data set
X_PSD, Pxx_den = scipy.signal.welch(X[:, :, 1:], fs = 125)
Pxx_den /= (Pxx_den.max()) # normalization, abs() because of negative values
# Pxx_den is the final data set (one that model.fit() is called on) after filter is applied
#Pxx_den = np.swapaxes(Pxx_den,1,2)
print(Pxx_den.shape)
# (24, #channels, 129) should be outcome



#This currently seems to be the best architecture (~25%) --> need to try with more data or by splitting up current data into smaller frames
model = Sequential()
model.add(Conv1D(filters=64, kernel_size=2, activation='relu', input_shape=(16, 129))) # currently using 16 channels
model.add(Conv1D(filters=64, kernel_size=2, activation='relu'))
model.add(Conv1D(filters=64, kernel_size=2, activation='relu'))
model.add(Flatten())
model.add(Dense(64, activation='softmax'))
model.add(Dense(32, activation='relu'))
model.add(Dense(5))
model.compile(loss='categorical_crossentropy', optimizer='sgd', metrics=['accuracy'])
# fit model
model.fit(Pxx_den, Y, epochs=500, verbose=1)

#current issue: loss is barely decreasing
