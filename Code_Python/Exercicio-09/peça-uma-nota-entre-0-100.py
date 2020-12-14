#atv em aula
nota = int(input("Digite uma nota entre Zero e Cem: "))
while (nota < 0) or (nota > 100):
        print("[Alerta: Número inválido]")
        nota = int(input("Digite um Valor válido: "))
        break
print("Esse numero é válido: ", nota)