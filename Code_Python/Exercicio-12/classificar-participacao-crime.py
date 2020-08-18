Nome = str(input("Qual seu nome?  \n"))
listapts = ["Telefonou para vítima?\n", "Esteve no local do crime?\n", "Mora perto da vítima ?\n", "Devia para a vítima?\n", "Já trabalhou com a vítima?\n"]
print("Responda com Sim [S] e Não [N]. \nObs: Responda com a letra que está entre colchetes.")
listanome = ["Suspeito.", "Cúmplice.", "Assassino.", "Inocente."]
Listaclass = []
Class = 0
list = []
for v in range(0, 5):
    NUM = Listaclass.append(input(listapts[v]))
    if  NUM == 'S':
        Class = Class + 1
if Class == 2:
    print(f"Nome: {Nome} \nClassificação da participação no crime: {listanome[0]}")
elif Class == 3 or Class == 4:
    print(f"Nome: {Nome} \nClassificação da participação no crime: {listanome[1]}")
elif Class == 5:
    print(f"Nome: {Nome} \nClassificação da participação no crime: {listanome[2]}")
elif Class == 0 or Class == 1:
    print(f"Nome: {Nome} \nClassificação da participação no crime: {listanome[3]}")