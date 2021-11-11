# -*- coding: utf-8 -*-

salario = float(input())

novoSalario = 0
reajuste = 0

if salario >= 0 and salario <= 400.00:
	novoSalario = salario * 1.15
	reajuste = novoSalario - salario
	print('Novo salario: {:.2f}'.format(novoSalario))
	print('Reajuste ganho: {:.2f}'.format(reajuste))
	print('Em percentual: 15 %')

elif salario >= 400.01 and salario <= 800.00:
	novoSalario = salario * 1.12
	reajuste = novoSalario - salario
	print('Novo salario: {:.2f}'.format(novoSalario))
	print('Reajuste ganho: {:.2f}'.format(reajuste))
	print('Em percentual: 12 %')

elif salario >= 800.01 and salario <= 1200.00:
	novoSalario = salario * 1.10
	reajuste = novoSalario - salario
	print('Novo salario: {:.2f}'.format(novoSalario))
	print('Reajuste ganho: {:.2f}'.format(reajuste))
	print('Em percentual: 10 %')

elif salario >= 1200.01 and salario <= 2000.00:
	novoSalario = salario * 1.07
	reajuste = novoSalario - salario
	print('Novo salario: {:.2f}'.format(novoSalario))
	print('Reajuste ganho: {:.2f}'.format(reajuste))
	print('Em percentual: 7 %')

elif salario > 2000.00:
	novoSalario = salario * 1.04
	reajuste = novoSalario - salario
	print('Novo salario: {:.2f}'.format(novoSalario))
	print('Reajuste ganho: {:.2f}'.format(reajuste))
	print('Em percentual: 4 %')

