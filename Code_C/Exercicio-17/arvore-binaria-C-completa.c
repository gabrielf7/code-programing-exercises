// Questão: Faça uma arvore binária em C completa, aonde todos os nós Pai estão cheios.
//Por João Gabriel.

#include <stdio.h>
#include <stdlib.h>
#define tamanhoAvr 15

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

typedef struct dados { int dds; } Dados;
typedef struct ArestaNo{
	Dados headInfo;
	struct ArestaNo *esquerda;
	struct ArestaNo *direita;
} TArestaNo;

TArestaNo *initialize(){
  return NULL;
}

Dados criarDado(int dds){
  Dados item;
  item.dds = dds;
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
    if(dx.dds > rzArvore->headInfo.dds){
      rzArvore->direita = insert(rzArvore->direita, dx);
    }else if(dx.dds < rzArvore->headInfo.dds){
      rzArvore->esquerda = insert(rzArvore->esquerda, dx);
    }
  }
  return rzArvore;
}


void printIMP(TArestaNo *rzArvore){
	if (rzArvore != NULL){
		printf("%d\t", rzArvore->headInfo);
		printIMP(rzArvore->esquerda);
		printIMP(rzArvore->direita);
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
    valor = ((1 + cont) + 5);
    rzArvore = insert(rzArvore, criarDado(valor));
    cont++;
  }

  printf("\n\nEsta eh a Arvore em Pre - Ordem: \n"); printIMP(rzArvore);

	DesalocArvore(rzArvore);
	pausar();
	return (0);
}