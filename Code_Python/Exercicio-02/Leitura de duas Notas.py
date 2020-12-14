import os
n1 = float(input("Digite a sua primeira nota: \n"))
n2 = float(input("Digite a sua segunda nota: \n"))
media = (n1+n2)/2
if(media >= 7) and (media <= 9.9):
    print("Aprovado")
else:
    if(media < 7):
        print("Reprovado")
    else:
        if(media == 10):
            print("Aprovado com Distinção")
input("Pressione <enter> para sair")