#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){

	float a, b, c, delta;
	printf("===================================================================================\n");
	printf("                                 Atividade\n");
	printf("===================================================================================\n");

	printf("Informe o valor de [(a] :  ");
	scanf("%f", &a);
	if (a == 0){
		printf("A equacao nao eh do segundo grau. \n Operacao Finalizada.\n");
	}else{
		printf("Informe o valor de [(b] :  ");
		scanf("%f", &b);
		printf("Informe o valor de [(c] :  ");
		scanf("%f", &c);
	}
	printf("===================================================================================\n");
	delta = (b * b) - 4 * a * c;
	if (delta < 0){
		printf("[Alerta: Delta calculado eh negativo, a equacao nao possui raizes reais.]\n");
	}else if (delta == 0){
		printf("[Alerta: Delta calculado eh igual a zero a equacao possui apenas uma raiz real.]\n");
	}else if (delta >= 0){
		printf("[Alerta: A equacao possui duas raizes reais.]\n");
	}
	printf("===================================================================================\n");
	pausar();;
	return (0);
}
