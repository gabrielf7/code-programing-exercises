#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

struct form{
	char nome[30];
	char endereco[120]; 
	int  numCasa; 
	char bairro[120]; 
	int  cep;
};

struct form formUser;

int main(){

	printf("\n m Digite seu nome: ");
	fflush(stdin);
	fgets(formUser.nome, 30, stdin);
	printf("\n m Informe seu endereco: ");
	fflush(stdin);
	fgets(formUser.endereco, 120, stdin);
	printf("\n m Digite o numero da casa: ");
	scanf("%d", &formUser.numCasa);
	printf("\n m Informe o bairro: ");
	fflush(stdin);
	fgets(formUser.bairro, 120, stdin);
	printf("\n m Informe o CEP: ");
	scanf("%d", &formUser.cep);

	printf(
		"\n Formulario: \n --> Nome: %s \n --> Endereco: %s \n --> Numero da Casa: %d \n"
		"\n --> Bairro: %s \n --> CEP: %d \n", 
		formUser.nome, formUser.endereco, formUser.numCasa, 
		formUser.bairro, formUser.cep
	);

	pausar();
	return(0);
}
