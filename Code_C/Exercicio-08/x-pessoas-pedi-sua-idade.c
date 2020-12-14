#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int pessoas, idade, media, soma = 0, x = 0;

	printf("Digite um numero de pessoas que vao participar de um teste: ");
	scanf("%d", &pessoas);
	if (pessoas <= 0){
		printf("[Alerta: Numero invalido.] \n");
	}
	
	printf("Digite um numero acima de 0: ");
	scanf("%d", &pessoas);
	if (pessoas > 0){
		for (x = 1; x <= pessoas; x++){
			printf("[Pessoa %d ] | Digite sua idade: ", x);
			scanf("%d", &idade);
			soma = soma + idade;
		}
		media = (soma / pessoas);
		if ((media >= 0) && (media <= 25)){
			printf("A media das idades foi classificada na categoria Jovem.\n");
		}else if ((media >= 26) && (media <= 60)){
			printf("A media das idades foi classificada na categoria Adulto.\n");
		}else if (media > 60){
			printf("A media das idades foi classificada na categoria Idosa.\n");
		}
	}

	pausar();
	return (0);
}
