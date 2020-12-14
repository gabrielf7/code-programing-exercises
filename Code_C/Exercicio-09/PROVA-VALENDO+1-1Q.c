#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int valor, ante;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	
	ante = valor - 1;
	
	printf("O antecessor do valor %d eh %d \n", valor, ante);
	
	pausar();
	return(0);
}
