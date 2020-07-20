#Questão 9

print('='*50)
print(" " * 19, "Atividade")
print('='*50)

a = float(input("Informe o valor de [(a] :  "))
if a == 0:
    print("A equação não é do segundo grau. \n Operação Finalizada.")
else:
    b = float(input("Informe o valor de [(b] :  "))
    c = float(input("Informe o valor de [(c] :  "))
    delta = (b*b)-4*a*c
    print('=' * 50)
    if delta < 0:
        print("[Alerta: Delta calculado é negativo, a equação não possui raizes reais.]")
    elif delta == 0:
        print("[Alerta: Delta calculado é igual a zero a equação possui apenas uma raiz real.]")
    elif delta >= 0:
        print("[Alerta: A equação possui duas raizes reais.]")

print('='*50)