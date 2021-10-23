# -*- coding: utf-8 -*-

primeiro, segundo, terceiro = input().split(" ")

primeiro = int(primeiro)
segundo = int(segundo)
terceiro = int(terceiro)

crescente = 0

if primeiro > segundo and segundo > terceiro:
    print('{}\n{}\n{}\n'.format(terceiro, segundo, primeiro))
    print('{}\n{}\n{}'.format(primeiro, segundo, terceiro))
elif primeiro > terceiro and terceiro > segundo:
    print('{}\n{}\n{}\n'.format(segundo, terceiro, primeiro))
    print('{}\n{}\n{}'.format(primeiro, segundo, terceiro))
elif segundo > primeiro and primeiro > terceiro:
    print('{}\n{}\n{}\n'.format(terceiro, primeiro, segundo))
    print('{}\n{}\n{}'.format(primeiro, segundo, terceiro))
elif segundo > terceiro and terceiro > primeiro:
    print('{}\n{}\n{}\n'.format(primeiro, terceiro, segundo))
    print('{}\n{}\n{}'.format(primeiro, segundo, terceiro))
elif terceiro > primeiro and primeiro > segundo:
    print('{}\n{}\n{}\n'.format(segundo, primeiro, terceiro))
    print('{}\n{}\n{}'.format(primeiro, segundo, terceiro))
elif terceiro > segundo and segundo > primeiro:
    print('{}\n{}\n{}\n'.format(primeiro, segundo, terceiro))
    print('{}\n{}\n{}'.format(primeiro, segundo, terceiro))

