#Questão 10
import os
print("*******************************************************************************************")
print("                             Sistema de Caixa Eletronico")

print("*******************************************************************************************")
vs = int(input("|-- Digite o valor do Saque:  "))
print("*******************************************************************************************")
print("|-- Valor: ", vs)
if (vs<10 or vs>600):
    print("Não está disponível")
else:
    if(vs>10 or vs<600):
        n100 = vs // (100)
        vs -= 100*n100
        n50 = (vs // 50)
        vs -= 100 * n50
        n10 = (vs // 10)
        vs -= 100 * n10
        n5 = (vs // 5)
        vs -= 100 * n5
        n1 = (vs // 1)
        vs -= 100 * n1
    if (n100 > 0):
        print(f"|-- Total de cédulas de R$ 100,0: {n100}")
    if (n50 > 0):
        print(f"|-- Total de cédulas de R$ 50,0: {n50} ")
    if (n10 > 0):
        print(f"|-- Total de cédulas de R$ 10,0: {n10}")
    if (n5 > 0):
        print(f"|-- Total de cédulas de R$ 5,0: {n5}")
    if (n1 > 0):
        print(f"|-- Total de cédulas de R$ 1,0: {n1}")
print("*******************************************************************************************")
#Não está completo
input("Pressione <enter> para sair")