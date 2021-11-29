# -*- coding: utf-8 -*-

qtd = int(input())

resultado = 0.0
resultado = float(resultado)

while qtd > 0:
	primeiro, segundo = input().split(" ")
	primeiro = int(primeiro)
	segundo = int(segundo)
	
	if segundo == 0:
		print('divisao impossivel')
	elif primeiro == 0:
		print('0.0')
	else:
		resultado = primeiro / segundo
		print('{}'.format(resultado))
	qtd -= 1

