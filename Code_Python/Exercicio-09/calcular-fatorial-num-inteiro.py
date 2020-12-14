#questão 07
print('='*50)
print(" " * 5, "Encontre o resultado de um n° fatorial")
print('='*50)
num = int(input("Digite o valor do numero: "))
fat = 1
x = 2
while x <= num:
    fat = fat * x
    x = x +1
print(f"O resultado do valor de [{num}!] é: {fat}")