#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int x = 0, listaVetor [5];
	
	while (x < 5){
		scanf("%d", &listaVetor[x]);
		x++;
	}
	printf("%f", listaVetor);

	pausar();
	return(0);
}
