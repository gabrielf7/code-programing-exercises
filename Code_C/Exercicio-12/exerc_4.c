#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int numUpdate(int escNum, int *vNumV) {
  int cont1, *pN; cont1=1; pN = 0;
	for(cont1=1; cont1<=7; cont1++) {
		pN = &vNumV[cont1]; *pN = escNum;
		*pN *= escNum;
	}
}

int main(){
	int cont, numeroUser, vetorNum[7], *pNum1; cont=1; pNum1=0;

	printf("\n m Digite um numero: ");
	scanf("%d", &numeroUser);
	numUpdate(numeroUser, vetorNum);

	printf("\n m Numeros atualizados pela funcao: \n");
	while(cont<=7){
		pNum1 = &vetorNum[cont];
		printf("\n --> %d", *pNum1); cont++;
	}

	pausar();
	return(0);
}
