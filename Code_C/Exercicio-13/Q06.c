#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

void numUpdateFreq(int *pAbs, float *pRel, int *vet, int *tam) {
  int cont1, cont2, cont3, contM;
  for(cont1 = 0; cont1 < *tam; cont1++) {
    for(cont2 = cont1 + 1; cont2 < *tam; cont2++) {
      if(vet[cont1] > vet[cont2]) {
        contM = vet[cont1];
        vet[cont1] = vet[cont2];
        vet[cont2] = contM;
      }
    }
  }
  for(cont1 = 0; cont1 < *tam; cont1++) {
    pAbs[cont1] = 1;
    for(cont2 = cont1 + 1; cont2 < *tam; cont2++) {
      if(vet[cont1] == vet[cont2]){
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

int main() {
  int cont, vetorNum[10], freqAbsoluta[10], vTamanho;
  float freqRelativa[10]; 
	cont=1; vTamanho = 10;

	for(cont=0; cont<10; cont++) {
		printf("\n m Digite um numero: ");
		scanf("%d", &vetorNum[cont]);
	}
	numUpdateFreq(freqAbsoluta, freqRelativa, vetorNum, &vTamanho);

  printf("\n --> Numero: Freq-Absoluta: Freq-Relativa:");
	for(cont=0; cont<10; cont++) {
		printf("\n --> %d\t\t %d\t\t %.2f\t", 
		  vetorNum[cont], freqAbsoluta[cont], freqRelativa[cont]
		);
	}
  pausar();
	return(0);
}