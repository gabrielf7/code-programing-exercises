#aula-25-09-19

num1 = int(input("Digite o primeiro numero: "))
num2 = int(input("Digite o ultimo numero: "))
soma = 0
total = 0
while (num1 <= num2):
        if (num1 % 2) == 1:
            soma = soma + 1
        num1 = num1 + 1
print(f" A soma dos números impares é: {soma} números impares.")