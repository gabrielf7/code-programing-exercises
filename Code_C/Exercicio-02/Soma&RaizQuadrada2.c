
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){

	float a, b, c, soma, raiz;

	printf("\t\t\tDigite seus tres numeros reais \n");

	printf("Digite o Primeiro numero real: ");
	scanf("%f", &a);
	printf("Digite o Segundo numero real: ");
	scanf("%f", &b);
	printf("Digite o Terceiro numero real: ");
	scanf("%f", &c);

	soma = a + b + c;
	raiz = sqrt(a * b * c);

	printf("\nResultado da Soma eh: %f \n", soma);
	printf("\nResultado da Raiz Quadrada eh: %f \n", raiz);

	pausar();;
	return (0);
}
