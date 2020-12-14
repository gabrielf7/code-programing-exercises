#questão 4

num1 = float(input("Digite o primeiro valor: \n"))
num2 = float(input("Digite o segundo valor: \n"))
num3 = float(input("Digite o terceiro valor: \n"))
if(num1 > num2 > num3 or num1 == num2 > num3 or num1 > num2 == num3):
    maior = num1
    segundo = num2
    menor = num3
elif num1 > num2 < num3 or num1 == num2 < num3 or num1 > num2 == num3:
        maior = num1
        segundo = num3
        menor = num2
if(num2 > num1 > num3 or num2 == num1 > num3 or num2 > num1 == num3):
    maior = num2
    segundo = num1
    menor = num3
elif (num2 > num1 < num3 or num2 == num1 < num3 or num2 > num1 == num3):
        maior = num2
        segundo = num3
        menor = num1
if(num3 > num1 > num2 or num3 == num1 > num2 or num3 > num1 == num2):
    maior = num3
    segundo = num1
    menor = num2
elif (num3 > num1 < num2 or num3 == num1 < num2 or num3 > num1 == num2):
        maior = num3
        segundo = num2
        menor = num1
if num1 == num2 == num3:
    maior = num1
    iguais = maior
    print("Iguais: [", iguais,"]")
    exit()

print("Maior: [", maior, "] | Segundo: [", segundo, "] | Menor: ", [menor])