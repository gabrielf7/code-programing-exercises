#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){
	int x = 0, listaVetor [5];
	while (x < 5){
		scanf("%d", &listaVetor[x]); x++;
  }
	for(x=0; x<5; x++){
  	printf("%d", listaVetor[x]);
  }
	
	pausar();
	return(0);
}
