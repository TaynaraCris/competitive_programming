# -*- coding: utf-8 -*-

primeiro = float(input())
segundo = float(input())
terceiro = float(input())
quarto = float(input())
quinto = float(input())
sexto = float(input())

positivos = 0
media = 0

if primeiro > 0:
	positivos = positivos + 1
	media = media + primeiro
if segundo > 0:
	positivos = positivos + 1
	media = media + segundo
if terceiro > 0:
	positivos = positivos + 1
	media = media + terceiro
if quarto > 0:
	positivos = positivos + 1
	media = media + quarto
if quinto > 0:
	positivos = positivos + 1
	media = media + quinto
if sexto > 0:
	positivos = positivos + 1
	media = media + sexto

print('{} valores positivos'.format(positivos))
print('{:.1f}'.format(media/positivos))

