/** Dada uma pilha P, construir uma função que inverte a ordem dos elementos
dessa pilha, utilizando apenas uma estrutura auxiliar. Definir
adequadamente a estrutura auxiliar e prever a possibilidade da pilha
estar vazia. */

#include <stdio.h>
#include <stdlib.h>
typedef struct no
{
  int num;
  struct no *prox;
} NODE;

void inverte(NODE *pilha);
void iniciar(NODE *pilha);
void inserir(NODE *pilha, int num);
void imprimir(NODE *pilha);

int main()
{
  NODE *p = (NODE *)malloc(sizeof(NODE));

  /* Iniciar a pilha: */
  iniciar(p);

  /* Inserir elementos na pilha: */
  printf("PILHA:\n");
  inserir(p, 50);
  inserir(p, 40);
  inserir(p, 30);

  /* Imprimir a pilha: */
  imprimir(p);

  /* Inverter pilha: */
  printf("\n\nPILHA INVERTIDA:\n");
  inverte(p);
  /* Imprimir novamente a pilha: */
  imprimir(p);

  return 0;
}

void iniciar(NODE *pilha)
{
  pilha->prox = NULL;
}

void inserir(NODE *pilha, int num)
{
  NODE *novo = (NODE *)malloc(sizeof(NODE));

  novo->num = num;

  if (pilha->prox == NULL)
  {
    pilha->prox = novo;
    novo->prox = NULL;
  }
  else
  {
    novo->prox = pilha->prox;
    pilha->prox = novo;
  }
}

void imprimir(NODE *pilha)
{
  if (pilha->prox == NULL)
  {
    printf("\nPilha Vazia!\n");
    return;
  }

  NODE *atual = pilha->prox;

  while (atual != NULL)
  {
    printf("----\n");
    printf(" %d\n", atual->num);
    atual = atual->prox;
  }
}

void inverte(NODE *pilha)
{
  if (pilha->prox == NULL)
  {
    printf("\nPilha Vazia!\n");
    return;
  }

  NODE *tmp = pilha->prox;
  NODE *pilha_aux = (NODE *)malloc(sizeof(NODE));
  NODE *lixo; // ponteiro que vai apontar para os no's antigos que serao desalocados.

  iniciar(pilha_aux); // iniciar pilha auxiliar. Apontando-a pra NULL.

  while (tmp != NULL)
  {
    inserir(pilha_aux, tmp->num);
    lixo = tmp;
    tmp = tmp->prox;
    free(lixo);
  }

  //A cabeca da pilha original aponta para o primeiro no' da pilha auxiliar.
  pilha->prox = pilha_aux->prox;
  free(pilha_aux); // desaloca a cabeca da pilha auxiliar.
}