#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont, cont1;
	int num1[6], *pNum1;

	cont = 1;
	while(cont<=5){
		pNum1 = &num1[cont];
		printf("\n Numero [%d]: ", cont);
		scanf("%d", pNum1); cont++;
	}
	for(cont=1; cont<=5; cont++){
		pNum1 = &num1[cont];
		printf("\n [Dobro do Vetor %d] --> %d \n", cont, (*pNum1 * 2));
	}

	pausar();
	return(0);
}
