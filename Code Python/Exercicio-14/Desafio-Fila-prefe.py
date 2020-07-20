filaP = []
filaNormal = []
while True:
    fila = int(input("Banco do SENAI: Insira-na-Fila(Aperte [1]) ~~ Atendimento(Aperte [2]) ~~ Sair(Aperte [0])\n_"))
    if fila == 1:
        filadoBanco = int(input("Digite sua senha:_"))
        filaP.append(filadoBanco)
    if fila == 2:
        filaP.sort()
        print("Fila da Preferencial:")
        for v, x in range(len(filaP) == 5):
            if filaP[x] != filaP[x]:
                print(f"\t\t{filaP[x]}")
            else:
                if filaP[x] == filaP[x]:
                    filaP.remove(v)
        print("Fila Normal:")
        for d in range(len(filaNormal) - len(filaP)):
            print(f"\t\t{filaP[d]}")
    if fila == 0:
        print("\nO programa foi encerrado com sucesso...\n")
        exit()