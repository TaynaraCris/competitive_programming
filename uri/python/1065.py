# -*- coding: utf-8 -*-

i = 1
par = 0

while i <= 5:
	valor = int(input())
	if valor % 2 == 0:
		par += 1
	i += 1

print('{} valores pares'.format(par))

