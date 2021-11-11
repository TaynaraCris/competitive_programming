# -*- coding: utf-8 -*-

inicio, fim = input().split()

inicio = int(inicio)
fim = int(fim)

total = 0

if inicio >= 0 and inicio <= 24:
	if fim >= 0 and fim <= 24:
		if inicio >= fim:
			total = (24 + fim) - inicio
			print('O JOGO DUROU {} HORA(S)'.format(total))
		else:
			total = fim - inicio
			print('O JOGO DUROU {} HORA(S)'.format(total))

