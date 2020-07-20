
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a, b, hipotenusa, area, perimetro, seno, cosseno;
	
	printf("Triangulo Retangulo \n");
    printf("Letra A: \n");
	printf("Digite o valor da Altura: \n");
	scanf("%f", &a);
	printf("Digite o valor da Base: \n");
	scanf("%f", &b);
  hipotenusa = sqrt(pow(a, 2)+pow(b, 2));
	printf("Resultado da Hipotenusa eh:  %f \n", hipotenusa);
	printf("----------------------------------------------------------------- \n");
	printf("Letra B: \n");
  area = a*b/2;
    printf("Resultado da area eh: %f \n", area);
	printf("----------------------------------------------------------------- \n");
	printf("Letra C: \n");
  perimetro = a+b+hipotenusa;
	printf("Resultado do perimetro eh: %f \n", perimetro);
	printf("----------------------------------------------------------------- \n");
	printf("Letra D: \n");
  seno = sin(a/hipotenusa);
  cosseno = cos(b/hipotenusa);
	printf("Resultado do Seno eh: %f \n", seno);
	printf("Resultado do Cosseno eh: %f \n", cosseno);
		
system("PAUSE");
return(0);
}
