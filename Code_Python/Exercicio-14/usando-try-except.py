'''cont = 0
num = 0
while True:#Validando uma variável de tipo inteiro, com a validação de condição e por tipo  ou usando except.
    try:
       num = int(input("numero: "))
       if num > 0:
           break
    except ValueError as err:
        print("Erro 404, o programa só aceita numeros inteiros.")
    else:
        if num <= 0:
            print("Erro, digite apenas numeros acima de 0.")
print(num)'''
'''cont = 0
num = []
while cont < 3:#Validando uma lista com vários valores de tipo inteiro, com a validação de condição e por tipo  ou usando except. Dentro de um laço.
    try:
        num1 = int(input("numero: "))
    except ValueError as err:
        print("Erro 404, o programa só aceita numeros inteiros.")
    else:
        if num1 > 0:
            num.append(num1)
            cont += 1
        if num1 <= 0:
            print("Erro, digite apenas numeros acima de 0.")
    finally:
        print("Executando Finally.")
for x in num:
    print(f"{x}")'''