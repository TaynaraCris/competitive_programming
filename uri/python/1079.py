# -*- coding: utf-8 -*-

qtd = int(input())
i = 1
media = 0
media = float(media)

while i <= qtd:
	media = 0.0
	primeira, segunda, terceira = input().split(" ")
	primeira = float(primeira)
	segunda = float(segunda)
	terceira = float(terceira)
	media = ((primeira * 2) + (segunda * 3) + (terceira * 5)) / 10.0
	print('{:.1f}'.format(media))
	i += 1

