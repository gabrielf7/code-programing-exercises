#include <stdio.h>
#include <stdlib.h>

typedef struct filaDinamica{
  int valor;
  struct filaDinamica *prox;
} filaD;

typedef struct filaT {
  filaD *inicio;
  filaD *fim;
} FilaT;

void inicializar (FilaT *f){
  f->inicio = NULL;
  f->fim = NULL;
}

void inserir(FilaT *f, int valor){
  filaD *novo = (filaD *)malloc(sizeof(filaD));
  novo->valor = valor;
  novo->prox = NULL;
  if (f->fim == NULL){
    f->inicio = novo;
  }else{
    f->fim->prox = novo;
  }
  f->fim = novo;

}

void listar(FilaT *f){
  filaD *aux;
  aux = f->inicio;

  printf("\n Valores inseridos na fila: ");
  while (aux != NULL){
    printf("%d ", aux->valor);
    aux = aux->prox;
  }
  printf("\n");

}

void inverte (filaD *e, filaD *ant){
  if(e->prox!=NULL){
    inverte(e->prox, e);
  }
  e->prox = ant;
}

int main(){
  int opcao, valor; opcao = 0;
  filaD *f = (filaD *)malloc(sizeof(filaD));

  inicializar(f);

  while (opcao < 10){
    valor = 1 + opcao;
    inserir(f, valor);
    opcao++;
  }
  printf("Lista:");
  listar(f);
  printf("Lista Invertida:");
  inverte(f, valor);

}