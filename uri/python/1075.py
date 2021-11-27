# -*- coding: utf-8 -*-

numero = int(input())
i = 1

while i <= 10000:
	if i % numero == 2:
		print('{}'.format(i))
	i += 1

