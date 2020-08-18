#questão 08
print('='*50)
print(" " * 5, "Encontre o um n° Primo")
print('='*50)
num = int(input("Digite um numero inteiro positivo: "))
x = num
cont = 0
diviexata = 0
if num <= 1:
    print("Numero errado")
    num = int(input("Digite um numero inteiro positivo: "))
else:
    while cont > 0:
        if (x % cont) == 0:
            diviexata = diviexata + 1
        cont = cont +1
if diviexata == 2:
    print(f"O numero {num} é primo.")
else:
    print(f"O numero {num} não é primo.")