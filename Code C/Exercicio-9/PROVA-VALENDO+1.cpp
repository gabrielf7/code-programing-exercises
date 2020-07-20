#include <stdio.h>
#include <stdlib.h>
int main(){
	int valor, ante;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	
	ante = valor - 1;
	
	printf("O antecessor do valor %d eh %d \n", valor, ante);
	
	system("pause");
	return(0);
}
