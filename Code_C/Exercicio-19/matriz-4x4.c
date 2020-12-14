#include <stdio.h>
#include <stdlib.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
  int linha, coluna;

  for (linha = 1; linha <= 4; linha++){
    for (coluna = 1; coluna <= 4; coluna++){
      if(coluna < 4){
        printf("%d \t", coluna*linha);
      }else{
        printf("%d \n", coluna*linha);
      }

    }
  
  }
  pausar();
	return(0);
}