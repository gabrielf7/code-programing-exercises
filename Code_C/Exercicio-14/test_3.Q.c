// Crie um algoritmo que leia 65000 elementos inteiros de um vetor. 
// Mostre ao final todos os elementos, índices do vetor e a posição 
// do ponteiro de cada elemento. Envie um arquivo compactado em formato 
// .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont, num[65000], *contcalc; cont=1;

	while(cont<=65000) {
		if(cont==1){contcalc = &num[cont]; *contcalc = 0;} *contcalc += 1;
		printf("\n Valor do Vetor %d, Indice %d, Ponteiro %p. \n", *contcalc, cont, &num[cont]);
		cont++;
	}

	pausar();
	return(0);
}
