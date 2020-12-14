// // Crie um programa que contenha um vetor de inteiros contendo 50 elementos. 
// Imprima o endereço de cada posição desse vetor. 
// Exemplo: "Ponteiro: 1, Valor do Vetor 1." 
// Envie um arquivo compactado em formato .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont, num[50], *contcalc; cont=1;

	while(cont<=50) {
		if(cont==1){contcalc = &num[cont]; *contcalc = 0;} *contcalc += 2;
		printf("\n Ponteiro: %d, Valor do Vetor %d. \n", &num[cont], *contcalc);
		cont++;
	}

	pausar();
	return(0);
}
