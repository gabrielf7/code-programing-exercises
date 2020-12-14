// Declare uma matriz 70 x 50. Preencha com 1 a diagonal principal 
// e com 0 os demais elementos. Escreva ao final a matriz obtida. 
// Envie um arquivo compactado em formato .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
  int contMatriz[70][50], contLinha, contColuna; contLinha=0; contColuna=0;

  for(contLinha=0; contLinha<70; contLinha++) {
    for(contColuna=0; contColuna<50; contColuna++) {
      if(contLinha == contColuna) {
        contMatriz[contLinha][contColuna]=1;
      }else{
        contMatriz[contLinha][contColuna]=0;
      }
    }
  }
  for(contLinha=0; contLinha<70; contLinha++) {
    for(contColuna=0; contColuna<50; contColuna++) {
      printf("|%d|", contMatriz[contLinha][contColuna]);
    }
    printf("-| \n");
  }
  
	pausar();
  return 0;
}
