#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
	int true = 0;
	int numeroInt1, op = 0, cont = 1, numeroInt2, numeroInt3, idade, soma, media, resultadoInt1, porcento;
	float numero1, numero2, numero3, adicao, subtracao, divisao, multiplicacao, resultado1, mediaFinal, mediaf;
	int a = 0, b = 1, c = 0;
	char nome[40], endereco[40], telefone[400], sexo[2];
	while(true != 1) {
		printf("\n ------------------------------------------------------------------------------------------> \n");
		printf(
			"* ---- * Opcoes do Programa * ---- *"
			"\n --> 01 - ... "
			"\n --> 02 - ... "
			"\n --> 03 - ... "
			"\n --> 04 - ... "
			"\n --> 05 - ... "
			"\n --> 06 - ... "
			"\n --> 07 - ... "
			"\n --> 08 - ... "
			"\n --> 09 - ... "
			"\n --> 10 - ... "
			"\n --> 11 - ... "
			"\n --> 12 - ... "
			"\n --> 13 - ... "
			"\n --> 14 - ... "
			"\n --> 15 - ... "
			"\n --> 16 - ... "
			"\n --> 17 - ... "
			"\n --> 18 - ... "
			"\n --> 19 - ... "
			"\n --> 20 - ... "
			"\n Selecione o zero[0] se quiser sair.\n "
		);
		printf("Sua Escolha:_");
		scanf("%d", &op);
		while((op < 0) || (op > 20)) {
			printf("\n [Erro]: O programa apenas aceita numeros das opcoes, de 1 ate 20 ou 0 para sair. \n");
			printf(" Digite novamente sua escolha:_");
			scanf("%d", &op);
		}
		switch(op) {
			case 1:

			break;
			case 2:

			break;
			case 3:

			break;
			case 4:

			break;
			case 5:

			break;
			case 6:

			break;
			case 7:

			break;
			case 8:

			break;
			case 9:
				
			break;
			case 10:
				// cont = 1;

				// while(cont <= 10) {
					
				// 	cont += 1;
				// }
			break;
			case 11:
			break;
			case 12:
			break;
			case 13:
			break;
			case 14:
			break;
			case 15:
			break;
			case 16:
			break;
			case 17:
			break;
			case 18:
			break;
			case 19:
			break;
			case 20:
			break;
			case 0: //Sair
				printf("\n Programa encerrado com sucesso...\n");
				exit(1);
			default: //Default
				printf("\n Opcao Invalida");
				break;
		}
	}
	pausar();
	return(0);
}
