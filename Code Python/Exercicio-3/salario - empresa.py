import os
VH = float(input("Digite o valor da sua hora: \n"))
HT = float(input("Digite a quantidade de horas trabalhadas: \n"))
salario_B = (VH*HT)
inss = (salario_B*0.1)
fgts = (salario_B*0.11)
sindicato = (salario_B*0.03)
isento = 0
if(salario_B <= 900):
    ir = salario_B*isento;
else:
    if(salario_B <=1500):
        ir = salario_B*0.05
    else:
        if(salario_B <= 2500):
            ir = salario_B*0.1
        else:
            ir = salario_B*0.2
totaldedescontos = ir + inss;
salario_l = salario_B - (totaldedescontos+sindicato);
print("O Salário Bruto: ({} * {})          : R$  {} \n".format(VH, HT, salario_B))
print(" ( - ) IR (5%)                          : R$  {} \n".format(ir))
print(" ( - ) INSS (10%)                       : R$  {} \n".format(inss))
print("FGTS (11%)                              : R$  {} \n".format(fgts))
print("Total de Descontos                      : R$  {} \n".format(totaldedescontos))
print("Salário Líquido                          :  R$ {} \n".format(salario_l))
input("Pressione <enter> para sair")