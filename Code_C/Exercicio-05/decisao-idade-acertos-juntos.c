#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int idade, acertos;
	
  printf("Programa que detectada sua Idade e Acertos na CNH \n");
	printf("Digite sua Idade: ");
	scanf("%d", &idade);
  printf("Digite sua Nota na Prova da CNH: ");
	scanf("%d", &acertos);
	if((idade >=18)&&(acertos >=21)){
	  printf("\nVoce foi Habilitado para a CNH ");	
	}else{
	  printf("\nVoce nao foi Habilitado para a CNH ");
	}

	pausar();
 	return(0);	
}
