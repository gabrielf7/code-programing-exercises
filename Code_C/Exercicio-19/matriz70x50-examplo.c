#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
  int linha, coluna, matriz[70][50]; linha=0; coluna=0;

  for(linha = 0; linha < 70; linha++) {
    for(coluna = 0; coluna < 50; coluna++) {
      if(linha == coluna) {
        matriz[linha][coluna] = 1;
      }else{
        matriz[linha][coluna] = 0;
      }
    }
  }

  for(linha = 0; linha < 70; linha++) {
    for(coluna = 0; coluna < 50; coluna++) {
      printf("[ %d ]", matriz[linha][coluna]);
    }
    printf("\n");
  }
  
	pausar();
  return 0;
}