lista = []
for x in range(1, 6):
    lista.append(int(input(f"POS[{x}] - Digite um numero: ")))
for x, v in enumerate(lista):
   print(f"POS[{x}] - Número: {v}", end=", ")
lista.reverse()
print(f"Lista Invertida: {lista}") #encontrando a posição dos numeros + reverse