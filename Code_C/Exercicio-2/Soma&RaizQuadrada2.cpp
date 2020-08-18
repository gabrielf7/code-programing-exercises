
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float a, b, c, soma, raiz;

	  printf("Digite seus tres numeros reais");
		
		printf("Digite o Primeiro numero real: ");
		scanf("%f", &a);
		printf("Digite o Segundo numero real: ");
		scanf("%f", &b);
		printf("Digite o Terceiro numero real: ");
		scanf("%f", &c);
		
	soma = a+b+c;
	raiz = sqrt (a*b*c);
	
	 printf("Resultado da Soma eh: %f \n", soma);
	 printf("Resultado da Raiz Quadrada eh: %f \n", raiz);

   system("PAUSE");
return(0);
}




