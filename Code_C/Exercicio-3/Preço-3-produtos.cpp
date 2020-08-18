#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	float num1, num2, num3, menor;
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &num1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &num2);
	printf("Digite o terceiro valor: \n");
	scanf("%f", &num3);
	if(num1 < num2 and num1 < num3)
	    menor = num1;
	if(num2 < num1 and num2 < num3)
	    menor = num2;
	if(num3 < num1 and num3 < num2)
	    menor = num3;
	printf("Esse e menor: %f\n", menor);
system("PAUSE");
return(0);
}
