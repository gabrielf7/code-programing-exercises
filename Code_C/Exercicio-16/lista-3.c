#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

typedef struct dataNode {
  int id;

} DataNode;

typedef struct node {
  DataNode data;
  struct node* next;

} Node;

typedef struct lista {
  int size;
  Node* head;

} Lista;

Lista* criarLista();
void push (Lista* lista, DataNode data);
void prtListBolhaInversa (Lista* lista);

Lista* criarLista() {
  Lista* lista = (Lista*) malloc(sizeof(Lista));

  lista->size = 7;
  lista->head = NULL;

  return lista;
}

void push (Lista* lista, DataNode data){
  Node* node = (Node*) malloc(sizeof(Node));
  
  node->data = data;
  node->next = lista->head;
  lista->head = node;
  lista->size++;

}

void prtListBolhaInversa (Lista* lista){
  int cont1, cont2;
  Node* pointer = lista->head;

  if(pointer == NULL) { printf("Lista Vazia"); }

  printf("Lista com Ordem Inversa: \t");
  while (pointer != NULL){
    printf("%d \t", pointer->data.id);
    pointer = pointer->next;
  }
  printf("\n");
}

int main(){
  int x, cont=0;
  Lista* l = criarLista();

  DataNode data;

  while( cont < 10){

    data.id = rand()%1000; //1000
    push(l, data);

    cont++;
  }

  prtListBolhaInversa(l);

  pausar();
  return(0);
}
