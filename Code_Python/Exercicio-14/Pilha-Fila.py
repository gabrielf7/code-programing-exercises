livroBiblioteca = []
escolha = 10
tamanho = 0
while escolha != 0:
    escolha = int(input("Use o programa da seguinte forma/: \n ¬¬>Inserir[1]¬¬>Remover[2]¬¬>Listar[3]¬¬>Sair[0] \n_"))
    if escolha == 0:#Função de Saída
        print("SAIU")
    if escolha == 1:#Função de Inserir
        if tamanho == 7:
            print("Estante Lotada")
        else:
            livroBiblioteca.append(input("Digite o nome do livro:_"))
            tamanho += 1
    if escolha == 2:#Função de Remover
        if tamanho == 0:
            print("Estante vazia, impossível remover.")
        else:
            livroBiblioteca.pop()
            tamanho -= 1
            print(livroBiblioteca)
    if escolha == 3:#Função de Listar
        if tamanho == 0:
            print("Estante vazia, impossível listar.")
        else:
            contador = tamanho - 1
            while contador >= 0:
                print(f"[{livroBiblioteca[contador]}]")
                contador -= 1
            '''if tamanho - 1:
               print(f"[{livroBiblioteca[0:-1]}]")
            else:
               print(livroBiblioteca)'''