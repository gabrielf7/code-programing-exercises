#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int multp(int *vNumV, int escNum) {
  int resultado;
  resultado = *vNumV * escNum;
  return resultado;
}

int main(){
	int x = 0, numV, resultado, escolha;
  printf("Informe 5 numeros");
  while(x < 5){
    printf("\n --> "); scanf("%d", &numV); x++;
  }

  printf("Escolha o numero que vai multiplica o ultimo:\n_ ");
  scanf("%d", &escolha);

  resultado = multp(&numV, escolha);

  printf("Resultado: %d", resultado);
	
	pausar();
	return(0);
}
