#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int matriz3x5[3][5], somaNMatriz[5], ctLinha, ctColuna;
  ctLinha=1; ctColuna=1;

  for(ctColuna=0; ctColuna<5; ctColuna++){somaNMatriz[ctColuna] = 0;}
  for(ctLinha=0; ctLinha<3; ctLinha++){
    for(ctColuna=0; ctColuna<5; ctColuna++){
      printf("Informe [%d]Coluna e [%d]Linha o numero:\n _: ", ctColuna, ctLinha);
      scanf("%d", &matriz3x5[ctLinha][ctColuna]);
    }
  }
  for(ctLinha=0; ctLinha<3; ctLinha++){
    for(ctColuna=0; ctColuna<5; ctColuna++){
      somaNMatriz[ctColuna] += matriz3x5[ctLinha][ctColuna];
    }
  }

  printf("\n Soma total de cada elemento da coluna: \n");
  for(ctColuna=0; ctColuna<5; ctColuna++){
    printf(" Coluna[%d]: %d \t", ctColuna, somaNMatriz[ctColuna]);
  }

  pausar();
	return(0);
}
