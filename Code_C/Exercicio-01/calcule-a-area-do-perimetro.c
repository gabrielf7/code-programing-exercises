
#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){

	float base, altura, area, perimetro;

	printf("Digite a base retangulo: \n");
	scanf("%f", &base);
	printf("Digite a altura do retangulo: \n");
	scanf("%f", &altura);

	area = base * altura;
	perimetro = 2 * (base + altura);

	printf("Resultado da area do retangulo: %f \n", area);
	printf("Resultado do perimetro do retangulo: %f \n", perimetro);

	pausar();
	return (0);
}
