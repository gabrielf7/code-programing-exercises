# 2021
from random import choice, randint

lista = []

def exibir():
  contSortear, pergunta = 0, str()
  while(contSortear==1):
    escolhido = choice(lista)
    print(' _ '*17)
    print(f"\n\t\tA opção sorteada: {escolhido}")
    print(' _ '*17)
    pergunta = str(input(
      "\nDeseja sortear novamente? Sim(s) ou Não(0)_/\n_"
    ))
    lista.remove(escolhido)
    if pergunta=="0":
      contSortear+=1
      print("\nPrograma encerrado com sucesso...")
      exit()
  print('^'*50)

def op1(funcEnumerar):
  contar, validarOpcao = 0, str()
  while(contar < funcEnumerar):
    opcoes = str(input(f"Digite a {contar + 1}° Opção: "))
    if (opcoes.strip(" ") == validarOpcao):
      print("\|Essa opção já existe...!\n")
    else:
      validarOpcao = opcoes.strip(" ")
      lista.append(validarOpcao)
      contar+=1
  exibir()

def op2(funcEnumerar):
  contar = 0
  while(contar < funcEnumerar):
    lista.append(contar + 1)
    contar+=1
  exibir()

print('^'*50)
print("\t Escolha as opções de Sorteio")
print("\t 1- Texto\n\t 2- Números")
escolhaOpcao = int(input("_ "))
enumerar = int(input("(N° inteiro) Quantidade de opções: "))

if(escolhaOpcao==1): 
  op1(enumerar)
if(escolhaOpcao==2):
  op2(enumerar)

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