lista = []
maxi = 0
m = 0
while True:
    num = int(input("Informe o número do jogador(0=fim): "))
    if num < 0 or num > 11:
      print("*Informe um valor entre 1 e 11 ou 0 para sair!*")
      num = int(input("Informe o número do jogador(0=fim): "))
    lista.append(num)
    if num == 0:
        print("\n Enquete: Quem foi o melhor jogador? \n")
        for cont in range(len(lista)):
            print(f"Informe o número do jogador: {lista[cont]}")
        lista.remove(0)
        print("\n Resultado da Votação: \n", f"\n Foram computados {len(lista)} votos\n")
        for d in range(1, 12):
            if lista.count(d) > 0:
                print(f"Jogador \n{d}\t\t\t\nVotos \n{lista.count(d)}\t\t\t\n%: \n{int(lista.count(d)/len(lista) * 100)}%")
                m = d
            if d == 1:
                maxi = lista.count(d)
                m = d
        print(f"O melhor jogador foi o número {max(maxi)}, com {m} votos, correspondendo a {int(lista.count(d)/len(lista) * 100)}% do total de votos.")
        exit()