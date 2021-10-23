# -*- coding: utf-8 -*-

tempo = int(input())

horas = 0
minutos = 0
segundos = 0

while tempo > 0:
    if tempo >= 3600:
        horas = horas + 1
        tempo = tempo - 3600
    elif tempo < 3600 and tempo >= 60:
        minutos = minutos + 1
        tempo = tempo - 60
    else:
        segundos = tempo
        break 

print('{}:{}:{}'.format(horas, minutos, segundos))

