lista = list()
maxi = 0
m = 0
porcen = 0
s = str()
while True:
    num = int(input("Informe o número do jogador(0=fim): "))
    while num < 0 or num > 11:
      print("*Informe um valor entre 1 e 11 ou 0 para sair!*")
      num = int(input("Informe o número do jogador(0=fim): "))
    lista.append(num)
    if num == 0:
        print("\n Enquete: Quem foi o melhor jogador? \n")
        for cont in range(len(lista)):
            print(f"Número do jogador(0=fim): {lista[cont]}")
        lista.remove(0)
        print("\n Resultado da Votação: \n", f"\n Foram computados {len(lista)} votos\n")
        for d in range(1, 12):
            if lista.count(d) > 0:
                print(f"Jogador:    Votos:     %: \n\t{d}\t\t\t{lista.count(d)}\t\t\t{lista.count(d)/len(lista) * 100:.1f} %")
            if d == 1:
                m = d
                maxi = lista.count(d)
                porcen = (lista.count(d) / len(lista) * 100)
            if lista.count(d) > maxi:
                m = d
                maxi = lista.count(d)
                porcen = (lista.count(d) / len(lista) * 100)
        print(f"O melhor jogador foi o número {m}, com {maxi} votos, correspondendo a {int(porcen)}% do total de votos.")
        exit()