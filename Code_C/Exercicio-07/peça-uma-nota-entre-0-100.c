#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int nota;
	
	printf("Digite um numero entre Zero e Cem: \n");
	scanf("%d", &nota);
	
	while ((nota < 0) || (nota > 100)){
		printf("[Alerta: Esse numero [%d] e invalido.] \n", nota);
		printf("Digite um numero entre Zero e Cem: \n");
		scanf("%d", &nota);
	}
	printf("[Esse numero [%d] esta entre Zero e Cem.] \n", nota);
    
 	pausar();
 	return(0);
}
