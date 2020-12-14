#questão 7
import os
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
media = (nota1+nota2)/2
if(media <= 4):
    conceito = "E"
else:
    if(media <= 6):
        conceito = "D"
    else:
        if media <= 7.5:
            conceito = "C"
        else:
            if media <= 9:
                conceito = "B"
            else:
                conceito = "A"

if(conceito == "A" or conceito == "B" or conceito == "C"):
    situacao = "Aprovado"
    print("Primeira Nota................... {} \n".format(nota1))
    print("Segunda Nota.................... {} \n".format(nota2))
    print("Média........................... {} \n".format(media))
    print("Conceito........................ {} \n".format(conceito))
    print("Situação........................ {} \n".format(situacao))
else:
    situacao = "Reprovado"
    print("Primeira Nota................... {} \n".format(nota1))
    print("Segunda Nota.................... {} \n".format(nota2))
    print("Média........................... {} \n".format(media))
    print("Conceito........................ {} \n".format(conceito))
    print("Situação........................ {} \n".format(situacao))

input("Pressione <enter> para sair")