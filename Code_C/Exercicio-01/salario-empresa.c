#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){

	float salario_B, salario_l, VH, HT, ir, inss, fgts, totaldedescontos, sindicato, isento;

	printf("Digite o valor da sua hora: \n");
	scanf("%f", &VH);
	printf("Digite a quantidade de horas trabalhadas: \n");
	scanf("%f", &HT);

	salario_B = (VH * HT);
	inss = (salario_B * 0.1);
	fgts = (salario_B * 0.11);
	sindicato = (salario_B * 0.03);
	isento = 0;

	if (salario_B <= 900){
		ir = salario_B * isento;
	}else{
		if (salario_B <= 1500){
			ir = salario_B * 0.05;
		}else{
			if (salario_B <= 2500){
				ir = salario_B * 0.1;
			}else{
				ir = salario_B * 0.2;
			}
		}
	}

	totaldedescontos = ir + inss;
	salario_l = salario_B - (totaldedescontos + sindicato);
	printf("O Salario Bruto eh: (%f * %f)             : R$  %f \n", VH, HT, salario_B);
	printf("( - ) IR (5%)                                             : R$  %f \n", ir);
	printf("( - ) INSS (10%)                                          : R$  %f \n", inss);
	printf("FGTS (11%)                                                : R$  %f \n", fgts);
	printf("Total de Descontos                                       : R$  %f \n", totaldedescontos);
	printf("Salario Liquido                                          : R$  %f \n", salario_l);

	pausar();;
	return (0);
}
