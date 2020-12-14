// Faça um algoritmo de uma ÁRVORE AVL, implemente 1000 elementos aleatórios, conte quantas rotações a arvore fez (use uma variável de contagem), ao final mostre os elementos usando o método da BOLHA (bubble sort), ou seja, para mostrar os elementos ordenados, e ao final da ordenação mostre quantas vezes houve troca dos elementos usando o método da BOLHA. (use outra variável de contagem).
//Por João Gabriel.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanhoAvr 1000

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

typedef struct dados { int Dados } Dados;
typedef struct ArestaNo{
	Dados headInfo;
	struct ArestaNo *esquerda;
	struct ArestaNo *direita;
} TArestaNo;

typedef TArestaNo *Arvore1000;

Arvore1000 iniciaArestaNo(Dados dh, Arvore1000 pesq1, Arvore1000 pdirt2){
	Arvore1000 ty;

	ty = (Arvore1000)malloc(sizeof(TArestaNo));
	ty->headInfo = dh;
	ty->esquerda = pesq1;
	ty->direita = pdirt2;
	return ty;
}

Arvore1000 criarArvore(Dados conta[], int ct, int tamanho){
	if (ct >= tamanho){
		return NULL;
	}else{
		return (
			iniciaArestaNo(
				conta[ct],
				criarArvore(conta, ((2 * ct) + 1), tamanho),
				criarArvore(conta, ((2 * ct) + 2), tamanho)
			)
		);
	}
}

void emOrdem(Arvore1000 rzArvore){
	if (rzArvore != NULL){
		emOrdem(rzArvore->esquerda);
		printf("%d\t", rzArvore->headInfo);
		emOrdem(rzArvore->direita);
	}
}

// void ordemBolha(Arvore1000 rzArvore){
//   if (rzArvore != NULL){
//     TArestaNo *bolha;
//     bolha = rzArvore->esquerda;
//     rzArvore->esquerda = rzArvore->direita;
//     rzArvore->direita = bolha;
// 		printf("%d\t", rzArvore->headInfo);
// 	}
// }

void DesalocArvore(Arvore1000 rzArvore){
  if (rzArvore != NULL){
    DesalocArvore(rzArvore->esquerda);
    DesalocArvore(rzArvore->direita);
    free(rzArvore);
  }
}

int main(){
	int cont, conta[tamanhoAvr]; cont=0;

  while(cont<tamanhoAvr){
    conta[cont] = rand()%1000;
    cont++;
  }
	Arvore1000 rzArvore = criarArvore(conta, 0, tamanhoAvr);

	printf("\n\nEsta eh a Arvore em Ordem: \n"); emOrdem(rzArvore);

	DesalocArvore(rzArvore);
	pausar();
	return (0);
}