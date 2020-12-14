#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
  int i = 10;
  char buf[10];

  // inteiro para string. Até 10 algarísmos.
  sprintf(buf, "%i", i);

  printf("\n sprintf -> Inteiro para String: '%s' \n", buf);

  // string para inteiro
  i = atoi(buf);

  printf("\n atoi -> String para Inteiro: %d \n", i);

  printf("\n");
	pausar();
	return(0);
}