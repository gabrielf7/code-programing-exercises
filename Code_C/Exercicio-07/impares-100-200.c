#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int soma = 0, x = 100, resto;
	
	printf("Tarefa do Programa:\n"
	"- Imprimir a quantidade de numeros impares de 100 ate 200.\n"
	);
	for (x = 100; x <= 200; x++){
		resto = (x % 2);
		if (resto == 1){
			soma = soma + 1;
		}       
  }
	printf("\nA soma dos numeros impares eh: %d numeros impares.\n", soma);
		
	pausar();
	return(0);
}
