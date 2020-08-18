
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x, celsius;
	
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f", &x);
	
	celsius = (x*9)/5+32;
	
	printf("Resultado em Celsius para Fahrenheit: %f \n", celsius);
	
	
	system("pause");
	return(0);
}
