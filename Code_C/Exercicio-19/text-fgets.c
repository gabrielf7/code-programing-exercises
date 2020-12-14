#include <stdio.h>
#include <stdlib.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){

  char carro[200];

  printf("Informe o nome do carro: \n");
  scanf("%s", &carro); 
  // imprime apenas uma palavra
  
  printf("Informe o nome do carro: \n");
  scanf("\n%[^\n]s", &carro); 
  // Esse formato não é recomendado, pois o scanf() poderá produzir outro efeito indesejado, no caso, tentar armazenar um texto com tamanho superior ao suportado pela variável.

  printf("Informe o nome do carro: \n");
  fgets(carro, 200, stdin); 
  //metodo recomendado para textos
  printf("Esse e o nome do carro que voce informou: %s \n", carro);

	pausar();
	return(0);
}