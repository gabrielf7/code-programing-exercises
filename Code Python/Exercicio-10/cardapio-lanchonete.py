# questao 12
preco = 0
Nprod = str()
add = 0
cont = [1001, 1002, 1003, 1004, 1005,  1006, 1007, 1008]
nome = []
p = []
cod = []
un = []
contorFz = 0
while True or contorFz == 2:
    print("          Cardápio da Lanchonete do GORDOXD:\n"
          "\n\t\t\t\t|_Especificação___|__Código__|__Preço__|\n\t\t\t\t"
          "| Cachorro quente |   1001   | R$ 2.50 |\n\t\t\t\t"
          "| Bauru Simples   |   1002   | R$ 3,00 |\n\t\t\t\t"
          "| Bauro com ovo   |   1003   | R$ 3,25 |\n\t\t\t\t"
          "| Hambúrguer      |   1004   | R$ 3,00 |\n\t\t\t\t"
          "| Cheeseburguer   |   1005   | R$ 4,00 |\n\t\t\t\t"
          "| X-Tudo          |   1006   | R$ 5,00 |\n\t\t\t\t"
          "| X-Frango        |   1007   | R$ 5,40 |\n\t\t\t\t"
          "| Refrigerante    |   1008   | R$ 2,50 |\t\t\t\t\n")

    print("__De acordo com a tabela acima, insira o código do produto que deseja comprar.\n")
    codigo = int(input("                  Insira o Código aqui ->: "))
    while codigo < 1001 or codigo > 1008:
        print("\t      /Operação Inválida/ ~~~~~>[Motivo: Código errado.]")
        codigo = int(input("                  Insira o Código aqui ->: "))
        break
    carr = int(input("              Agora insira a quantidade desejada: "))
    while carr <= 0:
        print("\t      /Operação Inválida/ ~~~~~>[Motivo: Quantidade insuficiente.]")
        carr = int(input("              Agora insira a quantidade desejada: "))
        break
    if codigo == 1001:
        preco = 2.50
        add = add + (carr * preco)
        Nprod = str('Cachorro quente')
    if codigo == 1002:
        preco = 3.00
        add = add + (carr * preco)
        Nprod = str('Bauru Simples')
    if codigo == 1003:
        preco = 3.25
        add = add + (carr * preco)
        Nprod = str('Bauro com ovo')
    if codigo == 1004:
        preco =3.00
        add = add + (carr * preco)
        Nprod = str('Hambúrguer')
    if codigo == 1005:
        preco = 4.00
        add = add + (carr * preco)
        Nprod = str('Cheeseburguer')
    if codigo == 1006:
        preco = 5.00
        add = add + (carr * preco)
        Nprod = str(' X-Tudo')
    if codigo == 1007:
        preco = 5.40
        add = add + (carr * preco)
        Nprod = str('X-Frango')
    if codigo == 1008:
        preco = 2.50
        add = add + (carr * preco)
        Nprod = str('Refrigerante')
    print(f"\t|Código:{codigo}|Produto: {Nprod} - Valor a R${preco:,.2f} UND|\n\t\t\t\t\tTotal_da_compra: R${add:,.2f}")
    cod.append(codigo)
    nome.append(Nprod)
    p.append(preco)
    un.append(carr)
    print("\t   OBS: Escolha apenas o número que está entre colchetes.")
    contorFz = int(input("\t\tDeseja...Finalizar[1] ou Continuar[2] a operação?_ "))
    while contorFz < 1 or contorFz > 2:
          print("Erro 404")
          print("\t   OBS: Escolha apenas o número que está entre colchetes.")
          contorFz = int(input("\t\tDeseja...Finalizar[1] ou Continuar[2] a operação?_ "))
    if contorFz == 1:
          print("/" * 79)
          print("|"," " * 30, "Cupom Fiscal"," "*31,"|")
          print("|","Itens:"," "*68,"|")
          for cont in range(len(nome)):
              n1 = nome[cont]
              n2 = p[cont]
              n3 = cod[cont]
              n4 = un[cont]
              print(f" # [Código: {n3}]",f"\n\t|Produto: {n1}", f"|Valor do Produto: R${n2:,.2f}", f"|Unidade: {n4} #")
          print("|","_" * 75,"|")
          print("|", " " * 75, "|")
          print(" " * 20, f"/#/   Total à pagar:\tR${add:,.2f}   /#/")
          print("|", "_" * 75, "|")
          print("/" * 79)
          exit()