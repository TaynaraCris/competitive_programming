# -*- coding: utf-8 -*-

a, b, c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

possivel = 0
perimetro = 0
area = 0

if abs(b - c) < a < b + c:
    perimetro = a + b + c
    print('Perimetro = {:.1f}'.format(perimetro))
elif abs(a - c) < b < a + c:
    perimetro = a + b + c
    print('Perimetro = {:.1f}'.format(perimetro))
elif abs(a - b) < c < a + b:
    perimetro = a + b + c
    print('Perimetro = {:.1f}'.format(perimetro))
else:
    area = ((a + b) * c) / 2
    print('Area = {:.1f}'.format(area))

