#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int num1, num2, soma = 0, q = 1, par = 0, qe = 1, resto;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o primeiro numero: ");
	scanf("%d", &num2);
	while (num1 < num2){
		num1 = num1 + 1;
		resto = num1 % 2;
		if (resto == 0){
			soma = soma + num1;
			par = par + 1;
		}else{
			qe = qe + num1;
			q = q + 1;
		}
	}
	printf("\nA soma dos numeros pares eh: %d \nQuantidade de pares: %d", soma, par);
	printf("\nA soma dos numeros impares eh: %d \nQuantidade de impares: %d \n", qe, q);

	pausar();
	return (0);
}
