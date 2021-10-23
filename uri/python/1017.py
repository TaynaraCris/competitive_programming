# -*- coding: utf-8 -*-

horas = int(input())
velocidade_media = int(input())

consumo_litros = horas * velocidade_media / 12.0

print('{:.3f}'.format(consumo_litros))

