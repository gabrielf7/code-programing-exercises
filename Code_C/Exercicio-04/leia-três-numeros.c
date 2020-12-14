#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	float numero1, numero2, numero3, maior, meio, menor, iguais;

	printf("Digite o primeiro valor: \n");
	scanf("%f", &numero1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &numero2);
	printf("Digite o terceiro valor: \n");
	scanf("%f", &numero3);
	
	//Alguns são iguais e outro não.
	// // Em cima e Em baixo
	if((numero1 == numero2) && (numero3 > numero1)) {
		maior = numero3;
		meio = numero1;
		menor = numero2;
	}
	if((numero1 == numero2) && (numero2 > numero3)) {
		maior = numero1;
		meio = numero2;
		menor = numero3;
	}
	if((numero2 == numero3) && (numero1 > numero2)) {
		maior = numero1;
		meio = numero2;
		menor = numero3;
	}
	if((numero3 == numero2) && (numero2 > numero1)) {
		maior = numero3;
		meio = numero2;
		menor = numero1;
	}
	// // Meio
	if((numero1 == numero3) && (numero3 > numero2)) {
		maior = numero1;
		meio = numero3;
		menor = numero2;
	}
	if((numero1 == numero3) && (numero2 > numero1)) {
		maior = numero2;
		meio = numero1;
		menor = numero3;
	}

	//Todos são diferentes
	if((numero1 > numero3) && (numero2 > numero1) && (numero2 > numero3)) {
		maior = numero2;
		meio = numero1;
		menor = numero3;
	}
	if((numero3 > numero2) && (numero1 > numero3) && (numero1 > numero2)) {
		maior = numero1;
		meio = numero3;
		menor = numero2;
	}
	if((numero3 > numero1) && (numero2 > numero3) && (numero2 > numero1)) {
		maior = numero2;
		meio = numero3;
		menor = numero1;
	}
	if((numero2 > numero1) && (numero3 > numero2) && (numero3 > numero1)) {
		maior = numero3;
		meio = numero2;
		menor = numero1;
	}

	printf("\n Maior:....[%.2f] \n Meio:.....[%.2f] \n Menor:....[%.2f] \n", maior, meio, menor);
	
	//Todos são iguais
	if((numero1 == numero2) && (numero1 == numero3)) {
		maior = numero1;
		iguais = maior;
		printf("Todos sao iguais ha: [%.2f] \n", iguais);
		exit(1);
	}
    
	pausar();
	return(0);
}
