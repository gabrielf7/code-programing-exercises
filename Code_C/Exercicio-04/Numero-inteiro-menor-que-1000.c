#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int num1, centena, dezena, unidade;
	int tam_num1;
	
	printf("Digite um numero inteiro menor que 1000: \n");
	scanf("%d", &num1);
	tam_num1 = (strlen, num1);
  
	centena  = (num1/100);
	dezena = (num1%100) / 10;
	unidade =  ((num1%100)%10);
	printf("%d = %d centenas, %d dezenas e %d unidades", num1, centena, dezena, unidade);
	
	pausar();
	return(0);
}
