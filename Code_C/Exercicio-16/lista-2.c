#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct filaDinamica{
  int valor;
  struct filaDinamica *prox;
};

struct filaDinamica *inicio, *fim;

void inserir(int valor){
  struct filaDinamica *novo;
  novo = (struct filaDinamica *)malloc(sizeof(struct filaDinamica));
  novo->valor = valor;
  novo->prox = NULL;
  if (fim == NULL){
    inicio = novo;
  }else{
    fim->prox = novo;
  }
  fim = novo;

}

void listar(){
  int cont1, cont2;

  struct filaDinamica *aux;
  aux = inicio;

  printf("\n Valores com o metodo da Bolha: ");
  while (aux != NULL){
    printf("%d ", aux->valor);
    aux = aux->prox;
  }
  printf("\n");

}

int main(){
  int opcao, valor, tamanhoAtual; 
  opcao = 0; tamanhoAtual = 0;
  inicio = NULL;
  fim = NULL;

  while (opcao < 10){
    valor = rand()%100;
    inserir(valor);
    tamanhoAtual++;
    opcao++;
  }
  listar();
}