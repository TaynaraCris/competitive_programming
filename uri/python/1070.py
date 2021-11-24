# -*- coding: utf-8 -*-

numero = int(input())
i = 1
impar = numero
parimpar = numero + 1

if numero % 2 != 0:
	while i <= 6:
		print('{}'.format(impar))
		impar += 2
		i += 1
else:
	while i <= 6:
		print('{}'.format(parimpar))
		parimpar += 2
		i += 1

