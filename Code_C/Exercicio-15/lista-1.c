#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

struct lista {
  int num;
  struct lista *prox;
};

struct lista *aloca () {
  return malloc (sizeof (struct lista));
}

void addItem ( struct lista *head ) {
  struct lista *aux, *novo;

  aux = head;

  while ( aux->prox != NULL ) {
    aux = aux->prox;
  }
  novo = aloca();

  printf("numero de exemplo: ");
  scanf("%d", &novo->num);
  novo->prox = NULL;

  aux->prox = novo;

}

int main() {
  struct lista escolha;
  escolha.prox = NULL;

  addItem(&escolha); addItem(&escolha);
  printf("%d \n", escolha.prox->num);
  printf("%d \n", escolha.prox->prox->num);

  pausar();
	return(0);
}