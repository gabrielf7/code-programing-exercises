#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int soma = 0, x = 100, resto;
	
	printf("Programa que imprime a quantidade de numeros impares de 100 ate 200.\n");
	
	for (x = 100; x <= 200; x++){
		resto = x % 2;
        if (resto == 1){
            soma = soma + 1;
        }       
    }
	
	printf(" A soma dos numeros impares eh: %d numeros impares.\n", soma);
		
	system("PAUSE");
	return(0);
}
