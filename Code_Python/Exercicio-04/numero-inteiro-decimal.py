#Questão 12
num = float(input("Digite um número para descobrir se é inteiro ou decimal: \n"))
if int(num / 1) == num:
    print(f"Esse número '{num}'é inteiro.")
else:
    print(f"Esse número '{num}' é decimal.")