#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (int(num / 1) == num)
	    printf("Esse numero %d eh inteiro. \n", num);
	else
	    printf("Esse numero %d eh decimal. \n", num);
system("PAUSE");
return(0);
}
