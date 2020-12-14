#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct numAtt{
	int num1;
};
struct numAtt numUser;

struct numAtt2{
	int num2;
};
struct numAtt2 numUser2;

int main(){
	int soma;

	printf("\n Insira um numero: ");
	scanf("%d", &numUser.num1);
	printf("\n Insira outro numero: ");
	scanf("%d", &numUser2.num2);

	soma = (numUser.num1 + numUser2.num2);

	printf("\n Soma \n");
	printf("\n --> %d \n", soma);

	pausar();
	return(0);
}
