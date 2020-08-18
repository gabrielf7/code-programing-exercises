#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float numero = 0;
	    printf("Digite o numero: \n");
	    scanf("%f", &numero);
	    
		if(numero>0) {
			printf("Numero Positivo. \n");	
		} else{
			printf("Numero Negativo. \n");
		}
		system("PAUSE");
return(0);
}
