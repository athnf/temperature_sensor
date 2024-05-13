import serial
import time

# Buka port serial (sesuaikan dengan port Arduino Anda)
arduino = serial.Serial('COM3', 9600, timeout=1)
time.sleep(2) 

while True:
    arduino.write(b'r')  
    data = arduino.readline().decode().strip() 
    if data:
        print("Suhu:", data)
    time.sleep(1)  
