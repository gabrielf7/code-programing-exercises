#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int x, id;
	
	printf("Infome sua idade: ");
	scanf("%d", &id);
	
	for(x = 0; x < 5; x++){ // inicio das instrucoes
		
		printf("%d \n", id);
		
	} // fim da repeticao
	
  pausar();
  return(0);
}
