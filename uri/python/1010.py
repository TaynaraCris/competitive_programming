# -*- coding: utf-8 -*-

codigo, numero, valor = input().split(" ")
codigo_dois, numero_dois, valor_dois = input().split(" ")

numero = float(numero)
valor = float(valor)

numero_dois = float(numero_dois)
valor_dois = float(valor_dois)

total = (numero * valor) + (numero_dois * valor_dois)

print('VALOR A PAGAR: R$ {:.2f}'.format(total))

