#include <stdio.h>
#include <stdlib.h>

void pausar() {
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int true = 0, op = 0, valor = 0, contador = 0, inicio = 0, fim = 0, tamanho = 0;
	int pilha[6];

	while(true != 1) {
		printf("\n Opcoes: \n [1] Inserir \n [2] Listar \n [3] Remover \n [0] Sair \n\n Escolha:_");
		scanf("%d", &op);

		switch(op) {
			case 1: //Inserir
				if(tamanho == 6) {
					printf("\n ---Pilha lotada--- \n");
				}else{
					printf("\n Digite o valor a ser inserido: ");
					scanf("%d", &valor);
					pilha[inicio] = valor;
					tamanho++;
					inicio++;
				}
			break;
			case 2: //Listar
				contador = inicio;
				while (contador > 0){
					printf("\n [%d]", pilha[contador - 1]);
					contador--;
				}
			break;
			case 3: //Remover
				if(tamanho == 0) {
					printf("\n Lista vazia. \n");
				}else{
					inicio--;
					pilha[inicio] = 0;
					tamanho--;
				}
			break;
			case 0: //Sair
				printf(
					"\n"
					"\n          ------- \n"
					" ~~> Hasta la vista baby"
					"\n          ------- "
					"\n"
				);
			exit(1);
			default: //Default
				printf("\n Opcao Invalida");
			break;
		}
	}
	pausar();
	return (0);
}
