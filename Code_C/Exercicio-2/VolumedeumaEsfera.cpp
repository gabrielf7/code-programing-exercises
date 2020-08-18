
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float volume, raio;
	
	printf("Digite o Raio da Esfera: \n");
	scanf("%f", &raio);
	
	printf("\n----------------------------------------------------\n\n");
	
	volume = 4*3.14*(raio*raio*raio)/3;
	
	printf("Resultado do Volume da Esfera: %f \n", volume);
	
	system("PAUSE");
	return(volume);
}
	

