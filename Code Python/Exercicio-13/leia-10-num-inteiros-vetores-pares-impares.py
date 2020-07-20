#USANDO COM FOR
'''listatotal = []
Pares = []
IMPARES = []
for a in range(0, 10):
    listatotal.append(int(input("Digite apenas números inteiros: ")))
    if listatotal[a] % 2 == 0:
        Pares.append(listatotal[a])
    else:
        IMPARES.append(listatotal[a])
print(f"Todos os números: {listatotal} \nTodos os números pares: {Pares} \nTodos os números impares: {IMPARES}")'''
#USANDO COM WHILE
listatotal = []
Pares = []
IMPARES = []
a = 0
while a < 10:
    listatotal.append(int(input("Digite apenas números inteiros: ")))
    if listatotal[a] % 2 == 0:
        Pares.append(listatotal[a])
    else:
        IMPARES.append(listatotal[a])
    a = a + 1
print(f"Todos os números: {listatotal} \nTodos os números pares: {Pares} \nTodos os números impares: {IMPARES}")
