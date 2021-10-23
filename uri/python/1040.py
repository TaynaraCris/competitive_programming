# -*- coding: utf-8 -*-

primeira, segunda, terceira, quarta = input().split(" ")

primeira = float(primeira)
segunda = float(segunda)
terceira = float(terceira)
quarta = float(quarta)

media = 0
mediafinal = 0

prova = 0

media = ((primeira * 2) + (segunda * 3) + (terceira * 4) + quarta) / 10

if media >= 7: 
     print('Media: {:.1f}'.format(media))
     print('Aluno aprovado.') 
elif media < 5:
    print('Media: {:.1f}'.format(media))
    print('Aluno reprovado.')
elif media >= 5 and media < 7:
    print('Media: {:.1f}'.format(media)) 
    print('Aluno em exame.')
    prova = float(input())
    mediafinal = (prova + media) / 2
    if mediafinal >= 5:
        print('Nota do exame: {:.1f}'.format(prova))
        print('Aluno aprovado.')
        print('Media final: {:.1f}'.format(mediafinal))
    elif mediafinal < 5: 
        print('Nota do exame: {:.1f}'.format(prova))
        print('Aluno reprovado.')
        print('Media final: {:.1f}'.format(mediafinal))
        
