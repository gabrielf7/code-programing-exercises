#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	float numero = 0;
	
	printf("Digite o numero: \n");
	scanf("%f", &numero);

	if (numero > 0){
		printf("Numero Positivo. \n");
	}else{
		if (numero < 0){
			printf("Numero Negativo. \n");
		}else{
			printf("Numero neutro. \n");
		}
	}
	pausar();
	return (0);
}
