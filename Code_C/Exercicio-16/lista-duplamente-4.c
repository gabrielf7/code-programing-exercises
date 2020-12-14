#include <stdio.h>
#include <stdlib.h>

struct listaDupla{
  int dataNum;
  struct listaDupla *ant, *prox;
};

typedef struct listaDupla ListaDupla;

ListaDupla *insere(ListaDupla *l, int v){

  ListaDupla *novo = (ListaDupla *)malloc(sizeof(ListaDupla));
  novo->dataNum = v; novo->prox = l; novo->ant = NULL;

  if (l != NULL){
    l->ant = novo;
  }

  return novo;
}

ListaDupla *busca(ListaDupla *l, int v){

  ListaDupla *p;

  for (p = l; p != NULL; p = p->prox){
    if (p->dataNum == v){
      return p;
    }
  }

  return NULL;
}

ListaDupla *retira(ListaDupla *l, int v){

  ListaDupla *p = busca(l, v);

  if (p == NULL){
    return l;
  }

  if (l == p){
    l = p->prox;
  }else{
    p->ant->prox = p->prox;
  }
  if (p->prox != NULL){
    p->prox->ant = p->ant;
  }
  free(p);

  return l;
}

int main(void) {
  ListaDupla *l;
  l = insere(l, 23);
  l = retira(l, 78);

  return 0;
}
