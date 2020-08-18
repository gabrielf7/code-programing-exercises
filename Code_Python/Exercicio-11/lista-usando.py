notas = []
x = 0
while x < 7:
    notas.append(float(input("Digite sua nota: ")))
    x += 1
notas.sort()
print(notas)
melhor = max(notas)
pior = min(notas)
'''sum(notas)'''
notas.remove(melhor)
notas.remove(pior)
media = sum(notas)/len(notas)
print(f"Maior nota: {melhor}, Menor: {pior}, Media: {media}")