# -*- coding: utf-8 -*-

um = float(input())
dois = float(input())
tres = float(input())
quatro = float(input())
cinco = float(input())
seis = float(input())

contador = 0

if um > 0:
    contador = contador + 1
if dois > 0:
    contador = contador + 1
if tres > 0:
    contador = contador + 1
if quatro > 0:
    contador = contador + 1
if cinco > 0:
    contador = contador + 1
if seis > 0:
    contador = contador + 1

print('{} valores positivos'.format(contador))

