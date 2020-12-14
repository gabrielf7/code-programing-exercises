#aula-25-09-19

num = int(input("Digite o numero inteiro diferente de 0: "))
soma = int(0)
while num != 0:
    soma = soma + num
    num = int(input("Digite outro numero: "))
print(f"Resultado da soma dos numero inteiro eh: {soma}")