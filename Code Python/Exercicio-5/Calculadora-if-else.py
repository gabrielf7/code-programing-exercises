import os
print("Calculadora do Dinheiro")
num1 = float(input("Digite o primeiro número: \n"))
tipo1 = type(num1)
print(tipo1)
num2 = float(input("Digite o segundo número: \n"))
tipo2 = type(num2)
print(tipo2)
print("Escolha a operação: [1] Adição | [2] Subtração | [3] Divisão | [4] Multiplicação")
op = int(input("Sua Escolha: "))
if(op == 1):
    print("Resultado da operação de Adição: \n", "R$", num1 + num2)
else:
    if(op == 2):
         print("Resultado da operação de Subtração: \n", "R$", num1 - num2)
    else:
        if(op == 3 and num2 == 0):
            print("Não é possível dividir por zero")
        else:
            if(op == 3):
                print("Resultado da operação de Divisão: \n", "R$", num1 / num2)
            else:
                 if(op == 4):
                    print("Resultado da operação de Multiplicação: \n", "R$", num1 * num2)
                 else:
                    print("Você errou a escolha")
input("Pressione <enter> para sair")