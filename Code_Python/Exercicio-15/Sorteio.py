# 2021
from random import choice, randint

lista = []

def exibirSorteado():
  contSortear, pergunta = 2, str()
  while(contSortear!=1):
    escolhido = choice(lista)
    contSortear+=1
    print(' _ '*26)
    print(f"\n~> {(contSortear + 1) - 3}° Sorteado, ganhou a opção: {escolhido}")
    print(' _ '*26)
    if (len(lista) > 1):
      pergunta = str(input(
        "\nDeseja sortear novamente? Sim(s) ou Não(n)_/\n_"
      ))
    lista.remove(escolhido)
    if (pergunta=="n") or (len(lista) == 0):
      contSortear+=1
      print("\nPrograma encerrado com sucesso...")
      exit()
  print('^'*77)

def opcao1(funcEnumerar):
  contar, validarOpcao = 0, str()
  while(contar < funcEnumerar):
    opcoes = str(input(f"Digite a {contar + 1}° Opção: "))
    if (opcoes.strip(" ") == validarOpcao):
      print("\|Essa opção já existe...!\n")
    else:
      validarOpcao = opcoes.strip(" ")
      lista.append(validarOpcao)
      contar+=1
  exibirSorteado()

def opcao2(funcEnumerar):
  contar = 0
  while(contar < funcEnumerar):
    lista.append(contar + 1)
    contar+=1
  exibirSorteado()

print('^'*77)
print(f"{' '*17}Sorteio do Piton\n\n{' '*10}Escolha as opções de Sorteio")
print(f"{' '*10}~> 1- Texto / ~> 2- Números")
escolhaOpcao = int(input("_ "))
enumerar = int(input("Quantidade de alternativa (valor limite do sorteio):\n_ "))

if(escolhaOpcao==1): 
  opcao1(enumerar)
if(escolhaOpcao==2):
  opcao2(enumerar)

# 2020
# import random

# lista = []

# enumerar = int(input("Informe a quantidade(n° inteiro) de opcoes: "))

# for contar in range(0, enumerar):
#   opcoes = str(input(f"Digite a {contar + 1}° Opção: "))
#   if (opcoes == "") or (opcoes == " "):
#     opcoes = str(input(f"Operação Inválida...Digite a {contar + 1}° Opção: "))
#   lista.append(opcoes)

# while True:
#   escolhido = random.choice(lista)
#   print(f"\nA opcao sorteada é: {escolhido} \n")
#   pergunta = int(input("Deseja sortear novamente?\nContinuar(Aperte 1) ou Sair(Aperte 0)\n_"))
#   if pergunta == 0:
#     print("\nPrograma encerrado com sucesso...")
#     exit()
  
# 2019
# import random

# n1 = str(input("Digite o nome: "))
# n2 = str(input("Digite o nome: "))
# n3 = str(input("Digite o nome: "))
# n4 = str(input("Digite o nome: "))

# lista = [n1, n2, n3, n4]
# escolhido = random.choices(lista)
# print("O nome do sorteado é: \n", escolhido)