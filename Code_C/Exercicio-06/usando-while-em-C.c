#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int cont = 1;
	
	while (cont <= 27){ //executado quando a condicao for verdadeira
		printf("%d \n", cont);
		cont = cont+1; // somando caso a condicao for verdadeira
	}
	
	pausar();
	return(0);
}
