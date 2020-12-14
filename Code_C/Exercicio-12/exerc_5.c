#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int numUpdate(int escNum1, int escNum2, int *vNumV) {
  int *pN; pN = 0;
	if(escNum1){
		pN = &vNumV[0];
		*pN = escNum1;
		*pN = escNum1 + escNum2;
	}
	if(escNum2){
		pN = &vNumV[1];
		*pN = escNum2;
		*pN = escNum1 - escNum2;
	}
}

int main(){
	int numeroUser1, numeroUser2, vetorNum[2], *pNum1; pNum1=0;

	printf("\n m Digite um numero: ");
	scanf("%d", &numeroUser1);
	printf("\n m Digite outro numero: ");
	scanf("%d", &numeroUser2);

	numUpdate(numeroUser1, numeroUser2, vetorNum);

	pNum1 = &vetorNum[0];
	printf("\n Soma: %d", *pNum1);

	pNum1 = &vetorNum[1];
	printf("\n Subtracao: %d", *pNum1);

	pausar();
	return(0);
}
