
import os

idade = int(input("Digite sua Idade: \n"))
acertos = int(input("Digite sua Nota na Prova da CNH \n"))
print(idade)
if idade > 0:
    print("Você é Habilitado para a CNH \n")
else:
    print("Você não é Habilitado para a CNH \n")
print(acertos)

input("Pressione <enter> para sair")