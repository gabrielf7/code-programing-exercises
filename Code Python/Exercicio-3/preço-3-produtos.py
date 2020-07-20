#questão 3

num1 = float(input("Digite o primeiro valor: \n"))
num2 = float(input("Digite o segundo valor: \n"))
num3 = float(input("Digite o terceiro valor: \n"))
if(num1 < num2 and num1 < num3):
    menor = num1
if(num2 < num1 and num2 < num3):
    menor = num2
if(num3 < num1 and num3 < num2):
    menor = num3
print("Esse é menor: ", menor)
exit()


