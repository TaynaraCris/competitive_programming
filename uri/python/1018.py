# -*- coding: utf-8 -*-

valor = int(input())

cem = 0
cinquenta = 0
vinte = 0
dez = 0
cinco = 0
dois = 0
um = 0

print('{}'.format(valor))

while valor > 0:
    if valor >= 100:
        cem = cem + 1
        valor = valor - 100
    elif valor >= 50:
        cinquenta = cinquenta + 1
        valor = valor - 50
    elif valor >= 20:
        vinte = vinte + 1
        valor = valor - 20
    elif valor >= 10:
        dez = dez + 1
        valor = valor - 10
    elif valor >= 5:
        cinco = cinco + 1
        valor = valor - 5
    elif valor >= 2:
        dois = dois + 1
        valor = valor -2
    elif valor == 1:
        um = um +1
        break

print('{} nota(s) de R$ 100,00'.format(cem))
print('{} nota(s) de R$ 50,00'.format(cinquenta))
print('{} nota(s) de R$ 20,00'.format(vinte))
print('{} nota(s) de R$ 10,00'.format(dez))
print('{} nota(s) de R$ 5,00'.format(cinco))
print('{} nota(s) de R$ 2,00'.format(dois))
print('{} nota(s) de R$ 1,00'.format(um))

