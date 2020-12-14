// Questão: Faça uma arvore AVL em C, aonde as tenhamos no máximo 5 rotações com os seus elementos.
//Por João Gabriel.

#include <stdio.h>
#include <stdlib.h>
#define tamanhoAvr 5

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}
int contDireita; contDireita=0; 
int contEsquerda; contEsquerda=0;

typedef struct ArestaNo{
	int headInfo; int headAltura;
	struct ArestaNo *direita;
	struct ArestaNo *esquerda;
} TArestaNo;

TArestaNo *inicializar(){ return NULL; }
int mAresta(int j, int g){ return (j > g) ? j : g; }

int headAltura(TArestaNo *halt){
  if (halt==NULL){
    return 0;
  } 
  return halt->headAltura;
}

TArestaNo *novoArestaNo(int headInfo){
  TArestaNo *node = (TArestaNo *) malloc(sizeof(TArestaNo));

  node->headInfo = headInfo;
  node->esquerda = NULL;
  node->direita = NULL;
  node->headAltura = 1;
  return node;
}

TArestaNo *direitaRot(TArestaNo *dirt){
  TArestaNo *aux = dirt->esquerda;
  TArestaNo *rt = aux->direita;

  aux->direita = dirt; contDireita++;
  dirt->esquerda = rt; contDireita++;

  dirt->headAltura = mAresta(headAltura(dirt->esquerda), headAltura(dirt->direita)) + 1;
  aux->headAltura = mAresta(headAltura(aux->esquerda), headAltura(aux->direita)) + 1; 
  return dirt;
}

TArestaNo *esquerdaRot(TArestaNo *esq){
  TArestaNo *aux = esq->direita;
  TArestaNo *rt = aux->esquerda;

  aux->esquerda = esq;contEsquerda++;
  esq->direita = rt;contEsquerda++;

  esq->headAltura = mAresta(headAltura(esq->esquerda), headAltura(esq->direita)) + 1;
  aux->headAltura = mAresta(headAltura(aux->esquerda), headAltura(aux->direita)) + 1; 
  return esq;
}

int balanc(TArestaNo *N){
  if (N == NULL){
    return 0;
  } 
  return headAltura(N->esquerda) - headAltura(N->direita);
}

TArestaNo *inserir(TArestaNo *node, int headInfo){
  int balanceamento;
  if (node == NULL){
    return (novoArestaNo(headInfo));
  }
  if (headInfo < node->headInfo){
    node->esquerda = inserir(node->esquerda, headInfo);
  }else if (headInfo > node->headInfo){
    node->direita = inserir(node->direita, headInfo);
  }else{
    return node;
  }

  node->headAltura = 1 + mAresta(headAltura(node->esquerda), headAltura(node->direita));
  balanceamento = balanc(node);

  if (balanceamento > 1 && headInfo < node->esquerda->headInfo){
    return direitaRot(node);
  }
  if (balanceamento < -1 && headInfo > node->direita->headInfo){
    return esquerdaRot(node);
  }
  if (balanceamento > 1 && headInfo > node->esquerda->headInfo){
    node->esquerda = esquerdaRot(node->esquerda);
    return direitaRot(node);
  }
  if (balanceamento < -1 && headInfo < node->direita->headInfo){
    node->direita = direitaRot(node->direita);
    return esquerdaRot(node);
  }

  return node;
}

void preOrdem(TArestaNo *rzArvore){
	if (rzArvore != NULL){
		printf("%d\t", rzArvore->headInfo);
		preOrdem(rzArvore->esquerda);
		preOrdem(rzArvore->direita);
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
	TArestaNo *rzArvore = inicializar();

  while(cont<tamanhoAvr){
    valor = ((1 + cont) + 3 + (-1) + (cont * 2));
    rzArvore = inserir(rzArvore, valor);
    cont++;
  }

  printf("\n\nPre - ordem da AVL\n");
  preOrdem(rzArvore);
  printf("\n\nNa AVL existiu %d rotacoes a direita.\n", contDireita);
  printf("\n\nNa AVL existiu %d rotacoes a esquerda.\n", contEsquerda);

	DesalocArvore(rzArvore);
	pausar();
	return (0);
}