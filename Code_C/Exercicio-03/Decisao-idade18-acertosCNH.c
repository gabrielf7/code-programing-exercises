#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int idade, acertos;

	printf("Programa que detectada sua Idade e Acertos na CNH \n");
	printf("Digite sua Idade: \n");
	scanf("%d", &idade);
	if (idade >= 18){
		printf("Voce e Habilitado para a CNH \n");
	}else{
		printf("Voce nao e Habilitado para a CNH \n");
	}
	
	printf("Digite sua Nota na Prova da CNH \n");
	scanf("%d", &acertos);
	if (acertos >= 21){
		printf("Voce foi aprovado na prova da CNH \n");
	}else{
		printf("Voce nao foi aprovado na prova da CNH \n");
	}

	pausar();
	return (0);
}
