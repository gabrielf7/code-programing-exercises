#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct numAtt{
	int vetorN[10];
};

struct numAtt numUser;

int main(){
	int cont, *maior, *menor; cont=1;

	for(cont=1; cont<=10; cont++){
		printf("\n Insira um numero para pessoa [%d]: ", cont);
		scanf("%d", &numUser.vetorN[cont]);
		if(cont == 1) {
			maior = &numUser.vetorN[cont]; 
			menor = &numUser.vetorN[cont];
		}
		if(&numUser.vetorN[cont] > maior) {
			maior = &numUser.vetorN[cont];
		}else{
			menor = &numUser.vetorN[cont];
		}
	}
	printf("\n Esse eh \n --> Maior: %d \n --> Menor: %d \n", maior, menor);

	printf("\n Todos \n");
	for(cont=1; cont<=10; cont++){
		printf("\n v[%d]--> %d", (cont-1), &numUser.vetorN[cont]);
	}

	pausar();
	return(0);
}
