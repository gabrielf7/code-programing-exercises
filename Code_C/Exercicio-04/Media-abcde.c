#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	float nota1, nota2, media;
	char conceito[5];

	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2) / 2;

	if (media <= 4){
		strcpy(conceito, "E");
	}else if (media <= 6){
		strcpy(conceito, "D");
	}else if (media <= 7.5){
		strcpy(conceito, "C");
	}else if (media <= 9){
		strcpy(conceito, "B");
	}else{
		strcpy(conceito, "A");
	}
	printf("\nMedia de Aproveitamento        Conceito \n");
	printf("Entre 9.0 e 10.0                   A   \n");
	printf("Entre 7.5 e 9.0                    B   \n");
	printf("Entre 6.0 e 7.5                    C   \n");
	printf("Entre 4.0 e 6.0                    D   \n");
	printf("Entre 4.0 e Zero                   E   \n");

	if ((strcmp(conceito, "A") == 0 || strcmp(conceito, "B") == 0 || strcmp(conceito, "C") == 0)){
		printf("\n=== Aprovado ===\n");
		printf("Conceito: %s\n", conceito);
	}else{
		printf("\n=== Reprovado ===\n");
		printf("Conceito: %s\n", conceito);
	}

	pausar();
	return (0);
}
