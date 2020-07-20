
import os
import math

print("Letra A: \n")
a = float(input("Digite o valor da Altura: \n"))
b = float(input("Digite o valor da Base: \n"))
hipotenusa = math.sqrt(a ** 2 + b ** 2)
area = a*b/2
perimetro = a + b + hipotenusa
seno = math.sin(a/hipotenusa)
cosseno = math.cos(b/hipotenusa)

print("Resultado da Hipotenusa eh: \n", hipotenusa)
print("Letra B: \n")
print("Resultado da area eh: \n", area)
print("Letra C: \n")
print("Resultado do perimetro eh: \n", perimetro)
print("Letra D: \n")
print("Resultado do Seno eh: \n", seno)
print("Resultado do Cosseno eh: \n", cosseno)

input("Pressione <enter> para sair")