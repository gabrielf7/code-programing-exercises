#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	int choice = 1, opcao, remover = 0, inicio = 0, fim = 0;
	int tamanho = 0, contador = 0, contador1 = 0;
	char escada[7][200], livro[200];

	printf("--------------------Biblioteca - Santa Money-------------------- \n");

	while (choice != 0){
		printf("Instrucoes do Programa:\n"
			">Inserir [1]\n"
			">Remover [2]\n"
			">Listar  [3]\n"
			">Sair    [0]\n"
			"\nEscolha uma opcao: "
		); scanf("%d", &opcao);

		while ((opcao > 3) || (opcao < 0)){
			printf("ERRO, informe apenas a opcao correta. \n");
			printf("Escolha a opcao correta: ");
			scanf("%d", &opcao);
		}
		
		switch (opcao){
			case 1: //Inserir
				getchar();
				if (tamanho == 8){
					printf("\n ---Pilha lotada--- \n");
				}else{
					printf("Digite o livro: ");
					fgets(livro, 200, stdin);
					escada[inicio][200] = livro[200];
					tamanho++;
					inicio++;
				}
			break;
			case 2: //Remover
				if (tamanho == 0){
					printf("Esta em falta. \n");
				}else{
					tamanho--;
					escada[contador - 1];
					inicio--;
				}
			break;
			case 3: //Listar
				contador = inicio;
				while (contador > 0){
					printf("\n Livro [%d]: %s \n", contador, (escada[contador - 1]));
					contador--;
				}
			break;
			case 0: //Sair
				printf(
					"\n"
					"\n          ------- \n"
					" ~~> Hasta vista baby"
					"\n          ------- "
					"\n"
				);
				exit(1);
			break;
			default: //Default
				printf("\n Opcao Invalida");
			break;
		}
	}

	pausar();
	return(0);
}
