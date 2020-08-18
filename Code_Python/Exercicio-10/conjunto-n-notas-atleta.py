#questao 11
print('='*50)
print(" " * 19, "Atividade")
print('='*50)
print('^'*50)
nome = str(input("......Nome do Atleta: "))
print('^'*50)
print(' '*14, "*Nota dos sete jurados*")
cont = 1
soma = 0
listnot = []
while cont <= 7:
    Ninserido = float(input(f" [{cont}]º Jurado| Nota: "))
    listnot.append(Ninserido)
    if cont == 1:
        maior = Ninserido
        menor = Ninserido
    else:
        if Ninserido > maior:
            maior = Ninserido
        if Ninserido < menor:
            menor = Ninserido
    soma = soma + Ninserido
    media = ((soma - menor) - maior)/5
    cont = cont + 1
print('='*50)
print(" " * 14, "Resultado do Programa\n")
for cont in range(len(listnot)):
    nota = listnot[cont]
    print(" " * 10, f" [{cont+1}]º Jurado| Nota: {nota} \n")
print(" " * 15, "Resultado Final\n")
print(" " * 10, f" | Nome: {nome} \n", " " * 10, f"| Maior: {maior} \n", " " * 10, f"| Menor: {menor} \n", " " * 10, f"| Média: {media} \n")
print('='*50)