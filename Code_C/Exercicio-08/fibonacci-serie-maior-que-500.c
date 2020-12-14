#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int a = 0, b = 1, c = 0;

	printf("N1: %d\n", a);
	printf("N2: %d\n", b);
	while (c < 500){
		c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
	}

	pausar();
	return(0);
}
