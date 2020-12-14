#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);
	if ((num % 2) == 0){
		printf("O numero %d eh par. \n", num);
	}else{
		printf("O numero %d eh impar. \n", num);
	}

	pausar();
	return (0);
}
