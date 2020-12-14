#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct notasBmt{
	float vNotas[4];
};
struct notasBmt notasBmtUser;

int main(){
	int cont; cont=1;
	float soma;

	while(cont<=4) {
		printf("\n [Nota %d]: ", cont);
		scanf("%f", &notasBmtUser.vNotas[cont]);
		soma += notasBmtUser.vNotas[cont]; cont++;
	}
	
	printf("\n Soma \n");
	printf("\n --> %.2f \n", soma);

	pausar();
	return(0);
}
