#Questão 5
import os
print("**********************************************************************************************\n");
print("-----------------------------------------Formulario-------------------------------------------\n");
salario_a = float(input("Digite o seu sálario: "))
if(salario_a <= 280):
    aumento = salario_a*0.2
else:
    if(salario_a <= 280) and (salario_a <=700):
       aumento = salario_a*0.15
    else:
        if (salario_a <= 700) and (salario_a <= 1500):
            aumento = salario_a * 0.1
        else:
            if (salario_a > 1500):
                aumento = salario_a * 0.05
print(f" O salário antes do reajuste; {salario_a}")
print(f" O percentual de aumento aplicado; {}")
print(f" O valor do aumento; {aumento}")
print(f" O novo salário, após o aumento ; {salario_a+aumento}")
#nao terminado
input("Pressione <enter> para sair")