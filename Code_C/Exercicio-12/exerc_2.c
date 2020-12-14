#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont;
	float num1[10];

	cont = 1;
	while(cont <= 10){
		printf("Numero [%d]: ", cont);
		scanf("%f", &num1[cont]); cont++;
	}
	for(cont=1; cont<=10; cont++){
		if(cont > 10){
			break;
		}else{
			printf("\n [%d] ENDC--> %d \n", cont, &num1[cont]);
		}
	}

	pausar();
	return(0);
}
