#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

struct lista {
  int numero;
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
  scanf("%d", &novo->numero);
  novo->prox = NULL;

  aux->prox = novo;
  // strcmp comparar antes ou depois da lista em ordem alfabetica

}

int main() {
  struct lista acervo;
  acervo.prox = NULL;

  addItem(&acervo); addItem(&acervo);
  printf("%d \n", acervo.prox->numero);
  printf("%d \n", acervo.prox->prox->numero);

  pausar();
	return(0);
}