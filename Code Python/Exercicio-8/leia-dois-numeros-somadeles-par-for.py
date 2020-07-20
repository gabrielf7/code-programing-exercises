num1 = int(input("Digite o primeiro numero: "))
num2 = int(input("Digite o primeiro numero: "))
soma = 0
q = 1
par = 0
qe = 1
for x in range(num1, num2):
    num1 = num1 + 1
    resto = num1 % 2
    if resto == 0:
        soma = soma + num1
        par = par + 1
    else:
        qe = qe + num1
        q = q + 1
print("A soma dos numeros pares eh: ", soma, "\nQuantidade de pares: ", par)
print("A soma dos numeros impares eh: ", qe, "\nQuantidade de impares: ", q)