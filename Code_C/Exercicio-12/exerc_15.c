#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct contapostador1{
	float apostador1;
	float resultado1;
};
struct contapostador1 apcontUser1;

struct contapostador2{
	float apostador2;
	float resultado2;
};
struct contapostador2 apcontUser2;

struct contapostador3{
	float apostador3;
	float resultado3;
};
struct contapostador3 apcontUser3;

float calcApt(float *pPremio, float *pApostador1, float *pApostador2, float *pResult){
	apcontUser1.resultado1 = (*pPremio * (*pApostador1/100));
	apcontUser2.resultado2 = (*pPremio * (*pApostador2/100));
	apcontUser3.resultado3 = (*pPremio - (apcontUser1.resultado1+apcontUser2.resultado2));
  pResult[1] = apcontUser1.resultado1;
	pResult[2] = apcontUser2.resultado2;
	pResult[3] = apcontUser3.resultado3;
}

int main(){
	int cont; cont=1;
	float premio, vResult[3];

	premio=780000.00; apcontUser1.apostador1=46; apcontUser2.apostador2=32;
	calcApt(&premio, &apcontUser1.apostador1, &apcontUser2.apostador2, vResult);

	while(cont<=3) {
		printf("\n [%d] - Ganhador(Apt): %.2f \n", cont, vResult[cont]);
		cont++;
	}

	pausar();
	return(0);
}
