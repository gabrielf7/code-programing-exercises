#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	float num1, num2;

	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	if (num1 > num2){
		printf("Esse e maior: [%f]\n", num1);
	}else{
		printf("Esse e menor: [%f]\n", num1);
	}
	if (num2 > num1){
		printf("Esse e maior: [%f]\n", num2);
	}else{
		printf("Esse e menor: [%f] \n", num2);
	}
	
	pausar();
	return (0);
}
