import serial
import csv

ser = serial.Serial('/dev/ttyUSB0', 115200)
arquivo = open('dados.csv', 'w')
escritor = csv.writer(arquivo)

while ser.inWaiting() > 0:
    linha = ser.readline()
    escritor.writerow(linha)

ser.close()
arquivo.close()
