// Crie um programa que leia números inteiro em um vetor de tamanho 100. 
// Imprima o endereço de cada posição desse vetor. Logo após calcular a soma 
// de todos os elementos desse vetor usando ponteiros. Envie um arquivo 
// compactado em formato .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont, num[100], somaVet, *contSoma; cont=1; somaVet=0;

	while (cont<=100) {
		printf("\n Insira um numero(aperte 0 para sair): ");
		scanf("%d", &num[cont]);
		if(num[cont]==0){ break; }

		printf("\n Posc[%d] --> %d", (cont-1), &num[cont]);

		contSoma = &num[cont]; *contSoma = num[cont]; somaVet += *contSoma;

		printf("\n Total da soma dos elementos do Vetor: %d \n", somaVet);
		cont++;
	}

	pausar();
	return(0);
}
