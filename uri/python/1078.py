# -*- coding: utf-8 -*-

n = int(input())

mult = 0

for i in range (1, 11):
	mult = i * n
	print('{} x {} = {}'. format(i, n, mult))

