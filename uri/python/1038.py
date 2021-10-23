# -*- coding: utf-8 -*-

codigo, quantidade = input().split(" ")

condigo = int(codigo)
quantidade = float(quantidade)
        
if codigo == '1':
    print('Total: R$ {:.2f}'.format(4.00 * quantidade))

elif codigo == '2':
    print('Total: R$ {:.2f}'.format(4.50 * quantidade))

elif codigo == '3':
    print('Total: R$ {:.2f}'.format(5.00 * quantidade))

elif codigo == '4':
    print('Total: R$ {:.2f}'.format(2.00 * quantidade))

elif codigo == '5':
    print('Total: R$ {:.2f}'.format(1.50 * quantidade))

