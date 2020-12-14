#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
  int numint, xa = 0, soma = 0;

  printf("Digite um numero inteiro:  ");
  scanf("%d", &numint);

  for (int x = 1; numint != 0; x++){
    soma = soma + numint;
    scanf("%d", &numint);
    xa = xa + 1;
  }

  printf("Resultado da soma dos numero inteiro eh: %d \n", soma);

  pausar();
  return (0);
}
