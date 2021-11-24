# -*- coding: utf-8 -*-

quantidade = int(input())
i = 1

while i <= quantidade:
	valor = int(input())
	if valor < 0 and valor % 2 == 0:
		print('EVEN NEGATIVE')
	if valor > 0 and valor % 2 == 0:
		print('EVEN POSITIVE')
	if valor < 0 and valor % 2 != 0:
		print('ODD NEGATIVE')
	if valor == 0:
		print('NULL')
	if valor > 0 and valor % 2 != 0:
		print('ODD POSITIVE')
	i += 1

