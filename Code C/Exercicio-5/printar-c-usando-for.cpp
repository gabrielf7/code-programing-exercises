#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, id;
	
	printf("Infome sua idade: ");
	scanf("%f", &id);
	
	for( x = 0; x < 5; x++)
	{ // inicio das instrucoes
		
		printf("%d \n", id);
		
	}// fim da repeticao
	
  system("PAUSE");
  return(0);
}
