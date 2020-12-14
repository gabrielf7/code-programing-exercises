#include <stdio.h>
#include <stdlib.h>

void pausar(){
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){
	float x, celsius;
	
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f", &x);
	
	celsius = (x*9)/(5+32);
	
	printf("Resultado em Celsius para Fahrenheit: %f \n", celsius);
	
	pausar();
	return(0);
}
