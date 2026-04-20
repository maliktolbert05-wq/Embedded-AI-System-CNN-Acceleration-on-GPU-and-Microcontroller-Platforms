import serial
import numpy as np

ser = serial.Serial('COM3',9600)

img = np.random.randint(0,255,(28,28),dtype=np.uint8)

ser.write(b'START\n')
for row in img:
    ser.write(bytearray(row))
ser.write(b'END\n')
