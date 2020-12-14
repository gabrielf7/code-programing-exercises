#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

float calcNums(float *pvNumcont){
	float result, *p; result=0;
	result = ((pvNumcont[1] * pvNumcont[1]) + pvNumcont[2] + pvNumcont[3]);
	return result;
}

struct numCont{
	float vNumcont[3];
};
struct numCont numContUser;

int main(){
	int cont; cont=1;
	float resultado; resultado=0;

	printf("\n Insira os numeros para operacao((x*x)+y+z)");
	while(cont<=3) {
		printf("\n --> ");
		scanf("%f", &numContUser.vNumcont[cont]); cont++;
	}
	resultado = calcNums(numContUser.vNumcont);
	printf("\n Resultado da operacao: %.2f", resultado);

	pausar();
	return(0);
}
