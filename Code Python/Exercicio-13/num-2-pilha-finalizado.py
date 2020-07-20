pilhaPares = []
pilhaImpares = []
InseridopilhaPares = []
InseridopilhaImpares = []
escolha = 10
cont = 0
tamanho = []
inicio = 0
lista3 = []
contador = 0
while cont < 10: #insira 10 numeros inteiros positivos diferente de 0.
    numeroDez = int(input("\033[0;34m" + "Digite apenas números inteiros:_" + "\033[m"))
    if numeroDez % 2 == 0 and numeroDez != 0: #numeros pares
        pilhaPares.append(numeroDez)
        InseridopilhaPares.append(numeroDez)
        inicio += 1
        tamanho.append(numeroDez)
        lista3.append(numeroDez)
    if numeroDez % 2 == 1 and numeroDez != 0: #numeros impares
        pilhaImpares.append(numeroDez)
        InseridopilhaImpares.append(numeroDez)
        inicio += 1
        tamanho.append(numeroDez)
        lista3.append(numeroDez)
    cont = cont + 1
while escolha != 0:
    esc = int(input("Utilize os recursos:\n~=>Listar(Aperte[1])~=>Ordem Decrescente(Aperte[2])~=>Remover(Aperte[3])~=>Sair(Aperte[0])\n_"))
    while esc < 0 or esc > 3:
        print("Digite apenas o número 1, 2, 3 ou 0 de acordo com as opções.")
        esc = int(input("~=>Listar(Aperte[1])~=>Ordem Decrescente(Aperte[2])~=>Remover(Aperte[3])~=>Sair(Aperte[0])\n_"))
    if esc == 1:
        listar = int(input("Deseja empilhar os números de que forma? \nPares e Impares(Aperte[1]) ou todos(Aperte[2])\n_"))
        while listar < 1 or listar > 2:
            print("Digite apenas o número 1 ou 2 de acordo com as opções.")
            listar = int(input("Pares e Impares(Aperte[1]) ou todos(Aperte[2])\n_"))
        if listar == 1:#Função de Listar
            print(f" Lista de Pares | Impares:")
            if len(InseridopilhaPares) == len(InseridopilhaImpares):#Função de listar caso o len das listas forem iguais
                for x in range(0, 5):
                    print(f"\t\t\t{InseridopilhaPares[x]}\t\t{InseridopilhaImpares[x]}\t")
            if len(InseridopilhaPares) > len(InseridopilhaImpares):#Função de listar caso o len do Par for maior do que o len do Impa
                for x in range(0, len(InseridopilhaPares) - len(InseridopilhaImpares)):
                    InseridopilhaImpares.append("")
                for d in range(len(InseridopilhaPares)):
                    print(f"\t\t\t{InseridopilhaPares[d]}\t\t{InseridopilhaImpares[d]}")
            if len(InseridopilhaImpares) > len(InseridopilhaPares):#Função de listar caso o len do Impa for maior do que o len do Par
                for x in range(0, len(InseridopilhaImpares) - len(InseridopilhaPares)):
                    InseridopilhaPares.append("")
                for d in range(len(InseridopilhaImpares)):
                    print(f"\t\t\t{InseridopilhaPares[d]}\t\t{InseridopilhaImpares[d]}")
        if listar == 2:#Função de listar para todos os numeros inseridos
                contador = inicio
                print("Todos os números:")
                while contador > 0:
                    print(f"\t\t{lista3[contador-1]}")
                    contador = contador - 1
    if esc == 2:#Função de Ordem Decrescente
        '''tamanho.sort(reverse=True)'''#usando o comando sort(reverse=True)
        Ordem = int(input("Deseja realizar ordem decrescente na pilha Par, Impa ou todos?\nOpção: Pares(Aperte[1]), Impares(Aperte[2]) ou todos(Aperte[3])\n_"))
        while Ordem < 1 or Ordem > 3:
            print("Digite apenas o número 1, 2 ou 3 de acordo com as opções.")
            Ordem = int(input("Opção: Pares(Aperte[1]), Impares(Aperte[2]) ou todos(Aperte[3])\n_"))
        if Ordem == 1:
            Par = len(pilhaPares)
            while Par > 0:
                p = len(pilhaPares) - 1
                while p > 0:
                    if pilhaPares[p] > pilhaPares[p - 1]:
                        pilhaPares[p], pilhaPares[p - 1] = pilhaPares[p - 1], pilhaPares[p]
                    p -= 1
                Par -=1
            print(f"Par:")
            for d in range(len(pilhaPares)):
                print(f"\t\t{pilhaPares[d]}")
        if Ordem == 2:
            Impa = len(pilhaImpares)
            while Impa > 0:
                p = len(pilhaImpares) - 1
                while p > 0:
                    if pilhaImpares[p] > pilhaImpares[p - 1]:
                        pilhaImpares[p], pilhaImpares[p - 1] = pilhaImpares[p - 1], pilhaImpares[p]
                    p -= 1
                Impa -= 1
            print(f"Impar:")
            for x in range(len(pilhaImpares)):
                print(f"\t\t{pilhaImpares[x]}")
        if Ordem == 3:
            todos = len(tamanho)
            while todos > 0:
                p = len(tamanho) - 1
                while p > 0:
                    if tamanho[p] > tamanho[p - 1]:
                        tamanho[p], tamanho[p - 1] = tamanho[p - 1], tamanho[p]
                    p -= 1
                todos -= 1
            print(f"Todos:")
            for x in range(len(tamanho)):
                print(f"\t\t{tamanho[x]}")
    if esc == 3:#Função de Remover
        if inicio == 0:
            print("impossível remover, pilha vazia.")
        else:
            tamanho.pop()
            lista3.pop()
            inicio -= 1
            contador = inicio
            print("Todos os números:")
            while contador > 0:
                print(f"\t\t{tamanho[contador - 1]}")
                contador = contador - 1
    if esc == 0:#Função de Saída
        print("\nPrograma encerrado com sucesso...")
        exit()