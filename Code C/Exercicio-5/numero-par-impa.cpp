#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if ((num % 2) == 0)
	    printf("O numero %d eh par. \n", num);
	else
	    printf("O numero %d eh impar. \n", num);
system("PAUSE");
return(0);
}
