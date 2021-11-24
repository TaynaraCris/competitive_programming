# -*- coding: utf-8 -*-

primeiro = int(input())
segundo = int(input())
num = 0

if primeiro > segundo:
	maior = primeiro
	menor = segundo
else:
	maior = segundo
	menor = primeiro

aux = menor + 1

while aux < maior:
	if aux % 2 != 0:
		num += aux
	aux += 1

print('{}'.format(num))

