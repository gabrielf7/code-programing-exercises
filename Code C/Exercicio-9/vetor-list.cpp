#include <stdio.h>
#include <stdlib.h>
int main(){
	int x = 0, listaVetor [5];
	while (x < 5){
		scanf("%d", &listaVetor[x]);
		x++;
    }
    printf("%f", listaVetor);
	system("PAUSE");
	return(0);
}
