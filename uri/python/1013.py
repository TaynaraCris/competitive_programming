# -*- coding: utf-8 -*-
import  math

a, b, c = input().split(" ")

a = int(a)
b = int(b)
c = int(c)

maiorab = (a + b + abs(a - b)) / 2
maiortodos = (maiorab + c + abs(maiorab - c)) / 2

maiortodos = int(maiortodos)

print('{} eh o maior'.format(maiortodos))

