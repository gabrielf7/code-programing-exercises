// Usando uma struct dentro de uma biblioteca .h, crie um algoritmo
// de Tabuada pedindo ao usuário a operação e os número 1 e número 2. 
// Enviar o arquivo compactado ".zip" com o arquivo .c e .h. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>
#include "test_7Q_tabuadadoaprenda.h"

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	int cont, escolha; cont=1;
	float numero1, numero2, resultado;

	printf("\n Escolha uma operacao:"
		"\n [1] Adicao  | [2] Subtracao"
		"\n [3] Divisao | [4] Multiplicacao \n"
	); printf("\n Escolha: "); scanf("%d", &escolha);
	printf("\n [1] Numero: ", cont);
	scanf("%f", &numero1);
	printf("\n [2] Numero: ", cont);
	scanf("%f", &numero2);

	resultado = calcTabu(&escolha, &numero1, &numero2);

	if(numero2==0){}else{printf("\n Resultado da operacao: %f", resultado);}

	pausar();
	return(0);
}
