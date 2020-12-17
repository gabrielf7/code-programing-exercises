# 2020
import random

lista = []

enumerar = int(input("Informe a quantidade(n° inteiro) de opcoes: "))

for contar in range(0, enumerar):
  opcoes = str(input(f"Digite a {contar + 1}° Opção: "))
  if (opcoes == "") or (opcoes == " "):
    opcoes = str(input(f"Operação Inválida...Digite a {contar + 1}° Opção: "))
  lista.append(opcoes)

while True:
  escolhido = random.choice(lista)
  print(f"\nA opcao sorteada é: {escolhido} \n")
  pergunta = int(input("Deseja sortear novamente?\nContinuar(Aperte 1) ou Sair(Aperte 0)\n_"))
  if pergunta == 0:
    print("\nPrograma encerrado com sucesso...")
    exit()
  
# 2019
# import random

# n1 = str(input("Digite o nome: "))
# n2 = str(input("Digite o nome: "))
# n3 = str(input("Digite o nome: "))
# n4 = str(input("Digite o nome: "))

# lista = [n1, n2, n3, n4]
# escolhido = random.choices(lista)
# print("O nome do sorteado é: \n", escolhido)