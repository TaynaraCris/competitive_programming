# -*- coding: utf-8 -*-

idade_dias = int(input())

anos = 0
meses = 0
dias = 0

while idade_dias > 0:
    if idade_dias >= 365:
        anos = anos + 1
        idade_dias = idade_dias - 365
    elif idade_dias >= 30:
        meses = meses + 1
        idade_dias = idade_dias - 30
    else:
        dias = idade_dias
        break

print('{} ano(s)'.format(anos))
print('{} mes(es)'.format(meses))
print('{} dia(s)'.format(dias))

