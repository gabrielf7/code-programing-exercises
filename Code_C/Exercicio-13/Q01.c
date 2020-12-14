#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int *ptr, x; ptr=&x; *ptr=0;

  printf("\n x = %d", x);
  printf("\n *ptr = %d", *ptr);

  *ptr+=5;
  printf("\n x = %d", x);
  printf("\n *ptr = %d", *ptr);

  (*ptr)++;
  printf("\n x = %d", x);
  printf("\n *ptr = %d", *ptr);

  pausar();
	return(0);
}
