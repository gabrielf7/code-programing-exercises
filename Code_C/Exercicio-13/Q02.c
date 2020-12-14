#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct numeroPS{
	int vNumero1;
};
struct numeroPS vnumeroPS;

struct numeroPS2{
	int vNumero2;
};
struct numeroPS2 vnumeroPS2;

int main(){
	int soma;

	vnumeroPS.vNumero1 = 27; vnumeroPS2.vNumero2 = 73;
	soma = (vnumeroPS.vNumero1 + vnumeroPS2.vNumero2);

	printf("\n Soma");
	printf(" --> %d \n", soma);

	pausar();
	return(0);
}
