#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int idade, acertos;
	
    printf("Programa que detectada sua Idade e Acertos na CNH \n");
	printf("Digite sua Idade: \n");
	 scanf("%d", &idade);
    printf("Digite sua Nota na Prova da CNH \n");
	 scanf("%d", &acertos);
	if((idade >=18)&&(acertos >=21)){
	  printf("Voce foi Habilitado para a CNH \n");	
	}else{
	  printf("Voce nao foi Habilitado para a CNH \n");
	}
	system("PAUSE");
 return(0);	
}
