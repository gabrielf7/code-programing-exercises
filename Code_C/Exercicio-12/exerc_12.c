#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct numEnum{
	float numEn;
};
struct numEnum numEnumUser;

int main(){
	int true, true1, todos; true=1; todos=0;
	float lerMD[100];

	while(true!=0) {
		printf("\n [Numero %d]-(Aperte 0 para sair): ", true);
		scanf("%f", &numEnumUser.numEn);
		if(numEnumUser.numEn == 0) {
			break;
		}else if((numEnumUser.numEn > 0) && (numEnumUser.numEn < 18)){
			lerMD[true] = numEnumUser.numEn; 
			todos+=1;
		}
	}
	printf("\n Numeros abaixo de 18 \n");
	for(true1=1 ;true1<=todos; true1++) {
		printf("\n --> %.2f \n", lerMD[true1]);
	}
	
	pausar();
	return(0);
}
