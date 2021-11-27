# -*- coding: utf-8 -*-

N = int(input())
fatorial = 1

while N > 1:
	fatorial *= N
	N -= 1

print('{}'.format(fatorial))

