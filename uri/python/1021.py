# -*- coding: utf-8 -*-

valor = float(input())

cem = 0
cinquenta = 0
vinte = 0
dez = 0
cinco = 0
dois = 0

um = 0
cinqcentavos = 0
vintecinco = 0
dezcent = 0
cincocent = 0
umcent = 0

valor = valor * 100
valor = int(valor)

if valor >= 10000:
    cem = valor / 10000 - 1
    valor = valor % 10000
if valor >= 5000:
    cinquenta = valor / 5000 - 1
    valor = valor % 5000 
if valor >= 2000:
    vinte = valor / 2000
    valor = valor % 2000
if valor >= 1000:
    dez = valor / 1000
    valor = valor % 1000
if valor >= 500:
    cinco = valor / 500
    valor = valor % 500
if valor >= 200:
    dois = valor / 200
    valor = valor % 200
if valor >= 100:
    um = um / 100 + 1
    valor = valor % 100
if valor >= 50:
    cinqcentavos = valor / 50
    valor = valor % 50
if valor >= 25:
    vintecinco = valor / 25
    valor = valor % 25
if valor >= 10:
    dezcent = valor / 10
    valor = valor % 10
if valor >= 5:
    cincocent = valor / 5
    valor = valor % 5
if valor >= 1:
    umcent = valor

print('NOTAS:')
print('{:.0f} nota(s) de R$ 100.00\n{:.0f} nota(s) de R$ 50.00\n{:.0f} nota(s) de R$ 20.00\n{:.0f} nota(s) de R$ 10.00\n{:.0f} nota(s) de R$ 5.00\n{:.0f} nota(s) de R$ 2.00'.format(cem, cinquenta, vinte, dez, cinco, dois))
print('MOEDAS:')
print('{:.0f} moeda(s) de R$ 1.00\n{:.0f} moeda(s) de R$ 0.50\n{:.0f} moeda(s) de R$ 0.25\n{:.0f} moeda(s) de R$ 0.10\n{:.0f} moeda(s) de R$ 0.05\n{:.0f} moeda(s) de R$ 0.01'.format(um, cinqcentavos, vintecinco, dezcent, cincocent, umcent))

