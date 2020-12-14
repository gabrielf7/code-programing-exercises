// Faça um algoritmo em C de uma árvore binária com 50 elementos. Após crie uma outra árvore binária com os mesmos elementos, mas desta vez ao contrário, ou seja, inverso (frente-trás, trás-frente).
//Por João Gabriel.

#include <stdio.h>
#include <stdlib.h>
#define tamanhoAvr 50

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

TArestaNo *inicializar(){
  return NULL;
}

Dados criarItem(int cod){
  Dados item;
  item.cod = cod;
  return item;
}

TArestaNo *inserir(TArestaNo *rzArvore, Dados dx){
  if(rzArvore == NULL){
    TArestaNo *audx = (TArestaNo *)malloc(sizeof(TArestaNo));
    audx->headInfo = dx;
    audx->esquerda = NULL;
    audx->direita = NULL;
    return audx;
  }else{
    if(dx.cod > rzArvore->headInfo.cod){
      rzArvore->direita = inserir(rzArvore->direita, dx);
    }else if(dx.cod < rzArvore->headInfo.cod){
      rzArvore->esquerda = inserir(rzArvore->esquerda, dx);
    }
  }
  return rzArvore;
}

void emOrdem(TArestaNo *rzArvore){
	if (rzArvore != NULL){
		emOrdem(rzArvore->esquerda);
		printf("%d\t", rzArvore->headInfo);
		emOrdem(rzArvore->direita);
	}
}

void ordemInversa(TArestaNo *rzOutraArvore){
	if (rzOutraArvore != NULL){
		ordemInversa(rzOutraArvore->esquerda);
		ordemInversa(rzOutraArvore->direita);
    printf("%d\t", rzOutraArvore->headInfo);
	}
}

void DesalocArvore(TArestaNo *rzArvore){
  if (rzArvore != NULL){
    DesalocArvore(rzArvore->esquerda);
    DesalocArvore(rzArvore->direita);
    free(rzArvore);
  }
}

void DesalocOutraArvore(TArestaNo *rzOutraArvore){
  if (rzOutraArvore != NULL){
    DesalocArvore(rzOutraArvore->esquerda);
    DesalocArvore(rzOutraArvore->direita);
    free(rzOutraArvore);
  }
}

int main(){
	int cont, valor; cont=0;
	TArestaNo *rzArvore = inicializar();
	TArestaNo *rzOutraArvore = inicializar();

  while(cont<tamanhoAvr){
    valor = 1 + cont;
    rzArvore = inserir(rzArvore, criarItem(valor));
    rzOutraArvore = inserir(rzOutraArvore, criarItem(valor));
    cont++;
  }

  printf("\n\nA Arvore esta em Ordem: \n"); emOrdem(rzArvore);
	printf("\n\nA Arvore esta em Ordem Inversa: \n"); ordemInversa(rzOutraArvore);

	DesalocArvore(rzArvore);
  DesalocOutraArvore(rzOutraArvore);
	pausar();
	return (0);
}