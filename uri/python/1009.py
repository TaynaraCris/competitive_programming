# -*- coding: utf-8 -*-

nome = input()
salario = float(input())
total_vendas = float(input())
n = 0.15

total = (n * total_vendas) + salario

print('TOTAL = R$ {:.2f}'.format(total))

