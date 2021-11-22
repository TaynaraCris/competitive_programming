# -*- coding: utf-8 -*-

i = 1
par = 0
impar = 0
positivo = 0
negativo = 0

while i <= 5:
	valor = int(input())
	if(valor % 2 == 0 or valor == 0):
		par += 1
	if(valor % 2 != 0):
		impar += 1
	if(valor < 0):
		negativo += 1
	if(valor > 0):
		positivo += 1
	i += 1

print('{} valor(es) par(es)'.format(par))
print('{} valor(es) impar(es)'.format(impar))
print('{} valor(es) positivo(s)'.format(positivo))
print('{} valor(es) negativo(s)'.format(negativo))

