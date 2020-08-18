cargaContainer = []
escolha = 10
tamanho = 0
maior = 0
lista = []
cont = []
while escolha != 0:
    escolha = int(input("Use o programa da seguinte forma/: \n ¬¬>Inserir[1]¬¬>Remover[2]¬¬>Listar[3]¬¬>Sair[0] \n_"))
    if escolha == 0:#Função de Saída
        print("\nPrograma encerrado com sucesso...")
    if escolha == 1:#Função de Inserir
        if tamanho == 5:
            print("Container Lotado.")
        else:
            cargaContainer.append(float(input("Digite o peso do container em toneladas:_")))
            '''cargaContainer.sort(reverse=True)'''#usando o comando sort(reverse=True)
            tamanho += 1
    if escolha == 2:#Função de Remover
        if tamanho == 0:
            print("impossível remover, Container vazio.")
        else:
            cargaContainer.pop()
            tamanho -= 1
            print(cargaContainer)
    if escolha == 3:#Função de Listar
        if tamanho == 0:
            print("impossível adicionar, Container Lotado.")
        else:
            print(cargaContainer)
'''class Cor:
  vermelho = 1
  verde = 2
  azul = 3
  branco = 4
  preto = 5

# Mude a cor para testar
cor_atual = 3

if cor_atual == Cor.vermelho:
  print("Vermelho")
elif cor_atual == Cor.verde:
  print("Verde")
elif cor_atual == Cor.azul:
  print("Azul")
elif cor_atual == Cor.branco:
  print("Branco")
elif cor_atual == Cor.preto:
  print("Preto")
else:
  print("Desconhecido")'''

