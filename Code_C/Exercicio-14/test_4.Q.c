// Escreva um programa que contenha três variáveis inteiras. Leia essas 
// variáveis do teclado. Compare seus endereços e exiba o maior endereço. 
// Envie um arquivo compactado em formato .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont, num1[3], *contMaior, num2, num3; cont=1;

	while (cont<=3) {
		printf("\n [%d]Insira um numero: ", cont);
		scanf("%d", &num1[cont]); cont++;
	}
	
	for(cont=1; cont<=3; cont++){
		if(cont==1) {
			contMaior=&num1[cont];
		}
		if(&num1[cont] > contMaior) {
			contMaior = &num1[cont];
		}
	}
	printf("\n Esse eh Maior: %d \n", contMaior);

	pausar();
	return(0);
}
