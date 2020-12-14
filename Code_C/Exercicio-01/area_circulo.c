
#include <stdio.h>
#include <stdlib.h>

void pausar(); {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){

  float raio, area;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  printf("Raio: %.2f\n", raio);
  area = 3.14 * (raio * raio);
  printf("Area: %.2f\n", area);

  pausar();;
  return (0);
}
