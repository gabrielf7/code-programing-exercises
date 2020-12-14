#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int matriz100x100[100][100], ctLinha, ctColuna, escolha;
  ctLinha=1; ctColuna=1;

  for(ctLinha=0; ctLinha<100; ctLinha++){
    for(ctColuna=0; ctColuna<100; ctColuna++){
      matriz100x100[ctLinha][ctColuna] = ctLinha + 1;
    }
  }

  printf("Escolha uma linha da matriz: ");
  scanf("%d", &escolha);
  for(ctColuna=0; ctColuna<100; ctColuna++){
    printf("%d", matriz100x100[escolha-1][ctColuna]);
  }

  pausar();
	return(0);
}
