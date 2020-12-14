#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

void numUpdate(int *vNumV, int *tam, int *pAbs, float *pRel) {
  int cont1, cont2, cont3, contP;
  for(cont1 = 0; cont1 < *tam; cont1++) {
    for(cont2 = cont1 + 1; cont2 < *tam; cont2++) {
      if(vNumV[cont1] > vNumV[cont2]) {
        contP = vNumV[cont1];
        vNumV[cont1] = vNumV[cont2];
        vNumV[cont2] = contP;
      }
    }
  }
  for(cont1 = 0; cont1 < *tam; cont1++) {
    pAbs[cont1] = 1;
    for(cont2 = cont1 + 1; cont2 < *tam; cont2++) {
      if(vNumV[cont1] == vNumV[cont2]){
        pAbs[cont1]++;
      }else{
        if(pAbs[cont1] > 1) {
          for(cont3 = cont1 + 1; cont3 < (cont1 + pAbs[cont1]); cont3++) {
            pAbs[cont3] = pAbs[cont1];
            pRel[cont3] = (float)pAbs[cont1] / *tam;
          }
        }
        break;
      }
    }
    pRel[cont1] = (float)pAbs[cont1] / *tam; cont1 += pAbs[cont1] - 1;
  }
}

int main(){
	int cont, vTamanho, freqAbsoluta[10], vetorNum[10]; 
  float freqRelativa[10];
	cont=1;  vTamanho = 10;

	for(cont=0; cont<10; cont++) {
		printf("\n m Digite um numero: ");
		scanf("%d", &vetorNum[cont]);
	}
	numUpdate(vetorNum, &vTamanho, freqAbsoluta, freqRelativa);

	for(cont=0; cont<10; cont++) {
		printf(
			"\n   --> Numero[%d]: %d -> Frequencia-Absoluta: %d Frequencia-Relativa: %.2f", 
			cont, vetorNum[cont], freqAbsoluta[cont], freqRelativa[cont]
		);
	}

	pausar();
	return(0);
}
