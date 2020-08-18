#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float num1, num2, num3, maior, segundo, menor, iguais;
	printf("Digite o primeiro valor: \n");
	scanf("%f", &num1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &num2);
	printf("Digite o terceiro valor: \n");
	scanf("%f", &num3);
	if (num1 > num2 > num3 or num1 == num2 > num3 or num1 > num2 == num3){
	    maior = num1;
	    segundo = num2;
	    menor = num3;
	}else
		
	    if (num1 > num2 < num3 or num1 == num2 < num3 or num1 > num2 == num3){
	        maior = num1;
	        segundo = num3;
	        menor = num2;
	}else
		
		if (num2 > num1 > num3 or num2 == num1 > num3 or num2 > num1 == num3){
		    maior = num2;
		    segundo = num1;
		    menor = num3;
	}else
		
	    if (num2 > num1 < num3 or num2 == num1 < num3 or num2 > num1 == num3){
	        maior = num2;
	        segundo = num3;
	        menor = num1;
	}else
		
 		if (num3 > num1 > num2 or num3 == num1 > num2 or num3 > num1 == num2){
		    maior = num3;
		    segundo = num1;
		    menor = num2;
	}else
		
	    if (num3 > num1 < num2 or num3 == num1 < num2 or num3 > num1 == num2){
	        maior = num3;
	        segundo = num2;
	        menor = num1;
	}
	
	if (num1 == num2 == num3)
	    maior = num1;
	    iguais = maior;
	    printf("Iguais: [%f] \n", iguais);
	    exit(1);
	    
	    
    printf("  Maior: [%f] \n  Segundo: [%f] \n  Menor: [%f] \n", maior, segundo, menor);
    
system("PAUSE");
return(0);
}
