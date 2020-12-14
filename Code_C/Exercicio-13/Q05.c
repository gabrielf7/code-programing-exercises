#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int matriz1000x1000[1000][1000], *pmatriz1000x1000, ctLinha, ctColuna;

  pmatriz1000x1000 = &matriz1000x1000;
  for(ctLinha=0; ctLinha<1000; ctLinha++){
    for(ctColuna=0; ctColuna<1000; ctColuna++){
      pmatriz1000x1000[ctColuna] = 0;
      *pmatriz1000x1000 = 0;
      printf("%d\t", *(pmatriz1000x1000));
    }
    printf("\n");
  }
  for(ctLinha=0; ctLinha<1000; ctLinha++){
    for(ctColuna=0; ctColuna<1000; ctColuna++){
      *(pmatriz1000x1000 + ctColuna) += 1;
      printf("%d\t", *(pmatriz1000x1000 + ctColuna));
    }
    printf("\n");
  }

  pausar();
	return(0);
}
