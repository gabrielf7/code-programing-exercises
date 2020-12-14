#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	float num; int num1;
	printf("Digite um numero: ");
	scanf("%f", &num);

	if (((int)(num / 1)) == num){
	  printf("Esse numero %.2f eh inteiro. \n", num);
	}else{
	  printf("Esse numero %.2f eh decimal. \n", num);
	}

	pausar();
	return(0);
}
