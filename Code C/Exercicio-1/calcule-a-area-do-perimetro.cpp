
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float base, altura, area, perimetro;

	
		printf("Digite a base retangulo: %f \n");
		scanf("%f", &base);
	    printf("Digite a altura do retangulo: %f \n");
		scanf("%f", &altura);
	
		area = base*altura;
		perimetro = 2*(base+altura);
		
		printf("Resultado da area do retangulo: %f \n", area);
		printf("Resultado do perimetro do retangulo: %f \n", perimetro);
		

	
	system ("pause");
	return (0);
}
