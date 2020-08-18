#questão 15
pessoas = int(input("Digite um número de pessoas que vão participar de um teste: "))
soma = 0
x = 0
if pessoas <= 0:
    print("[Alerta: Número inválido.]")
    pessoas = int(input("Digite um número acima de 0: "))
if pessoas > 0:
    for x in range(pessoas):
        idade = int(input(f"[Pessoa {x+1}] | Digite sua idade: "))
        soma = soma + idade
    media = soma/pessoas
    if 0 <= media <= 25:
        print("A média das idades foi classificada na categoria Jovem.")
    elif 26 <= media <= 60:
        print("A média das idades foi classificada na categoria Adulto.")
    elif media > 60:
        print("A média das idades foi classificada na categoria idosa.")