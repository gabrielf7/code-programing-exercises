// Faça um algoritmo em C de uma árvore binária aonde tem 100 elementos na ordem (a) pre-ordem (b) em-ordem(c) pos-ordem.
//Por João Gabriel.

#include <stdio.h>
#include <stdlib.h>
#define tamanhoAvr 100

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

typedef struct dados { int cod; } Dados;
typedef struct ArestaNo{
	Dados headInfo;
	struct ArestaNo *esquerda;
	struct ArestaNo *direita;
} TArestaNo;

TArestaNo *initialize(){
  return NULL;
}

Dados itemCreate(int cod){
  Dados item;
  item.cod = cod;
  return item;
}

TArestaNo *insert(TArestaNo *rzArvore, Dados dx){
  if(rzArvore == NULL){
    TArestaNo *audx = (TArestaNo *)malloc(sizeof(TArestaNo));
    audx->headInfo = dx;
    audx->esquerda = NULL;
    audx->direita = NULL;
    return audx;
  }else{
    if(dx.cod > rzArvore->headInfo.cod){
      rzArvore->direita = insert(rzArvore->direita, dx);
    }else if(dx.cod < rzArvore->headInfo.cod){
      rzArvore->esquerda = insert(rzArvore->esquerda, dx);
    }
  }
  return rzArvore;
}


void preOrdem(TArestaNo *rzArvore){
	if (rzArvore != NULL){
		printf("%d\t", rzArvore->headInfo);
		preOrdem(rzArvore->esquerda);
		preOrdem(rzArvore->direita);
	}
}

void emOrdem(TArestaNo *rzArvore){
	if (rzArvore != NULL){
		emOrdem(rzArvore->esquerda);
		printf("%d\t", rzArvore->headInfo);
		emOrdem(rzArvore->direita);
	}
}

void posOrdem(TArestaNo *rzArvore){
	if (rzArvore != NULL){
		posOrdem(rzArvore->esquerda);
		posOrdem(rzArvore->direita);
		printf("%d\t", rzArvore->headInfo);
	}
}

void DesalocArvore(TArestaNo *rzArvore){
  if (rzArvore != NULL){
    DesalocArvore(rzArvore->esquerda);
    DesalocArvore(rzArvore->direita);
    free(rzArvore);
  }
}

int main(){
	int cont, valor; cont=0;
	TArestaNo *rzArvore = initialize();

  while(cont<tamanhoAvr){
    valor = 1 + cont;
    rzArvore = insert(rzArvore, itemCreate(valor));
    cont++;
  }

  printf("\n\nEsta eh a Arvore em Pre - Ordem: \n"); preOrdem(rzArvore);
  printf("\n\nEsta eh a Arvore em Ordem: \n"); emOrdem(rzArvore);
	printf("\n\nEsta eh a Arvore em Pos - Ordem: \n"); posOrdem(rzArvore);

	DesalocArvore(rzArvore);
	pausar();
	return (0);
}