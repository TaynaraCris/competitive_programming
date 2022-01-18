# -*- coding: utf-8 -*-

combustivel = 1
alcool = 0
gasolina = 0
diesel = 0

while combustivel != 4:
    combustivel = 0
    combustivel = int(input())
    if combustivel == 1 or combustivel == 2 or combustivel == 3 or combustivel == 4:
        if combustivel == 1:
            alcool += 1
        elif combustivel == 2:
            gasolina += 1
        elif combustivel == 3:
            diesel += 1
 
print('MUITO OBRIGADO')
print('Alcool: {}'.format(alcool))
print('Gasolina: {}'.format(gasolina))
print('Diesel: {}'.format(diesel))

