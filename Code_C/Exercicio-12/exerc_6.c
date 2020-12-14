#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int numUpdate(int *pMaior1, int *pMaior2, int *nNumV) {
  int cont1, cont2, contM; cont1=1; cont2=1;
  for(cont1=1; cont1<=4; cont1++) {
    for(cont2=1; cont2<=4; cont2++) {
      if(nNumV[cont1] > nNumV[cont2]) {
        contM = nNumV[cont1];
        nNumV[cont1] = nNumV[cont2];
        nNumV[cont2] = contM;
      }
    }
  } *pMaior1 = nNumV[1]; *pMaior2 = nNumV[2];
}

int main(){
	int cont, numeroUser[4], vMaior1, vMaior2; cont=1;

	while(cont <= 4){
		printf("\n m Digite o %d numero: ", cont);
		scanf("%d", &numeroUser[cont]); cont++;
	}
	numUpdate(&vMaior1, &vMaior2, numeroUser);

	printf("\n Maior[1]: %d", vMaior1);
	printf("\n Maior[2]: %d", vMaior2);

	pausar();
	return(0);
}
