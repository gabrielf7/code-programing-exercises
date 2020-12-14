#include <stdio.h>
#include <stdlib.h>

int inicio = 0, fim = 0;
int tamanho = 0, contador = 0;
char escada[7][200], livro[200], pegar[1][200];

void inserir(void);
void remover(void);
void listar(void);
void sair(void);

int main() {
  int true = 0;
  int opcao = 0;

	printf(" >--------------------Biblioteca - Santo Money--------------------<\n");

	while(true != 1) {
		printf("\n      ||> Inserir[1] ||> Remover [2] ||> Listar[3] || >Sair[0]");
		printf("\n          ~<~~>~Comandos do Sistema para livros~<~~>~ \n");
		printf("\n Escolha[De 0 a 3]:_ ");
		scanf("%d", &opcao);
		while((opcao < 0) || (opcao > 3)) {
			printf("\n ERRO, informe apenas a opcao correta. \n");
			printf("\n Escolha a opcao correta:_");
			scanf("%d", &opcao);
		}
		switch(opcao) {
			case 1:
				// void inserir(void);
				inserir();
			break;
			case 2:
				// void remover(void);
				remover();
			break;
			case 3:
				// void listar(void);
				listar();
			break;
			case 0:
				// void sair(void);
				sair();
			break;
			default: //Default
				printf("\n Opcao Invalida");
			break;
		}
		fflush (stdin);
	}
	pausar();
	return (0);
}

//funcoes

void inserir(){ //Inserir
	getchar();
	if(tamanho == 8) {
		printf("\n ---Pilha lotada--- \n");
	}
	else{
		printf("\n Nome do livro: ");
		fgets(livro, 200, stdin);

		escada[inicio][200] = livro[200];
		tamanho++;
		inicio++;
	}
	return;
}

void listar(){ //Listar
	contador = inicio;
	while(contador > 0) {
		// pegar[0][200] = toupper(escada[contador - 1][200]);
		printf("\n Livro [%d]: %s", contador, escada[contador]);
		contador--;
	}
	printf("\n");
	return;
}

void remover(){ //Remover
	if(tamanho == 0) {
		printf("Esta em falta. \n");
	}else{
		tamanho--;
		escada[contador - 1];
		inicio--;
	}
	return;
}

void sair(){ //Sair
	printf(
		"\n"
		"\n          ------- \n"
		" ~~> Hasta la vista baby"
		"\n          ------- "
		"\n"
	);
	exit(1);
}

void pausar() {
	printf("\nPressione alguma tecla para continuar...");
	getch();
}