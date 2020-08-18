print("Loja de Tintas\n")
tamanho = int(input("Digite o tamanho em metros quadrados da área a ser pintada:\n_"))
tamanho36, tamanhoMisturado, lista, Lata18, Lata36, L, G = tamanho, tamanho, [], 0, 0, 0, 0
for x in range(0, tamanho):
      if tamanho > 1:
            tamanho = tamanho - 108
            Lata18 += 1
      if tamanho36 > 1:
            tamanho36 = tamanho36 - 21.6
            Lata36 += 1
      if tamanhoMisturado > 1:
            tamanhoMisturado = tamanhoMisturado - (108 + 21.6)

      lista = [Lata18, Lata36]
print(f"=§ Comprar apenas latas de 18 litros:\n\tQuantidade de latas: {lista[0]}\n\tPreço: R$ {lista[0]*80}"
      f"\n=§ Comprar apenas galões de 3,6 litros:\n\tQuantidade: {lista[1]}\n\tPreço de: R$ {lista[1]*25}"
      f"\n=§ Misturar latas e galões, com desconto de 10%: R$ {((lista[0]*80) + (lista[1]*25)) - (((lista[0]*80) + (lista[1]*25)) * 0.10)}")