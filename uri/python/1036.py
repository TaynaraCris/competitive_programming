# -*- coding: utf-8 -*-
import math

a, b, c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

delta = 0
raiz1 = 0
raiz2 = 0

delta = (b * b) - (4 * a * c)

if a <= 0:
    print('Impossivel calcular')
elif delta < 0:
    print('Impossivel calcular')
elif delta >= 0 and a > 0:
    raiz1 = (-b + math.pow(delta, 1/2)) / (2 * a)
    raiz2 = (-b - math.pow(delta, 1/2)) / (2 * a)
    print('R1 = {:.5f}'.format(raiz1))
    print('R2 = {:.5f}'.format(raiz2))

