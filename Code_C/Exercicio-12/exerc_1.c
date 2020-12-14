#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int num1;
	int num2;
	
	if(&num1 > &num2){
		printf("\n Esse eh Maior(num1): %d Menor(num2): %d \n", &num1, &num2);
	}else if (&num2 > &num1){
		printf("\n Esse eh Maior(num2): %d Menor(num1): %d \n", &num2, &num1);
	}
	
	pausar();
	return(0);
}
