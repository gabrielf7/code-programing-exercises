#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct numCMP1{
	float numEn1[5];
};
struct numCMP1 numCMP1User1;

struct numCMP2{
	float numEn2[5];
};
struct numCMP2 numCMP2User2;

int main(){
	int cont, cont1; cont=1; cont1=1;

	while(cont<=5) {
		printf("\n Insira numero[%d] para vetor [1]: ", cont);
		scanf("%f", &numCMP1User1.numEn1[cont]);
		printf("\n Insira numero[%d] para vetor [2]: ", cont);
		scanf("%f", &numCMP2User2.numEn2[cont]);

		for(cont1=1; cont1<=5; cont1++) {
			if(
				(numCMP1User1.numEn1[cont] == numCMP2User2.numEn2[cont1]) &&
				(numCMP2User2.numEn2[cont] == numCMP1User1.numEn1[cont1])
			) {
				printf("\n [%d] Valor na posicao do vetor eh iqual a de outro vetor. \n", cont1);
			}
		}
		cont++;
	}
	
	pausar();
	return(0);
}
