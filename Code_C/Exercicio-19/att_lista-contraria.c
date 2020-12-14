#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){
  int x = 0, listaVetor[5];
  while(x < 5) {
    scanf("%d", &listaVetor[x]);
    x++;
  }
  x = 4;
  while(x >= 0) {
    printf("%d -|", listaVetor[x]);
    x = x - 1;
  }
  pausar();
  return(0);
}
