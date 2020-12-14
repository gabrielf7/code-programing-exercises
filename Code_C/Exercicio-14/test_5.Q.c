// Faça um algoritmo que leia uma matriz 100 x 100 com valores reais. 
// (a) Imprima a soma de todos os elementos das colunas ímpares. 
// (b) Imprima todos os elementos das colunas pares. 
// (c) Imprima a media dos elementos da coluna 
// 10, 20, 30, 40, 50, 60, 70, 80, 90 e 
// linhas 10, 20, 30, 40, 50, 60, 70, 80, 90. 
// Envie um arquivo compactado em formato .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
  int cont, contMatriz[100][100], contLinha, contColuna, contTodos, contTodosPar; 
  cont=1; contTodos=0; contTodosPar=0; 
  float media1, media2, contPar[100][100], somaImpar; somaImpar=0;

  for(contLinha=0; contLinha<100; contLinha++) {
    for(contColuna=0; contColuna<100; contColuna++) {
      if(contColuna==0){ contMatriz[contLinha][contColuna]==1;}
      contMatriz[contLinha][contColuna] += 1;
    }
  }
  for(contLinha=0; contLinha<100; contLinha++) {
    for(contColuna=0; contColuna<100; contColuna++) {
      if(contColuna % 2 == 0) {
        contPar[contColuna][contColuna] = contMatriz[contLinha][contColuna];
        contTodosPar += 1;
      }else{
        somaImpar += contMatriz[contLinha][contColuna];
      }
      if(
        (contMatriz[contLinha][contColuna]==10 || contMatriz[contLinha][contColuna]==20) ||
        (contMatriz[contLinha][contColuna]==30 || contMatriz[contLinha][contColuna]==40) ||
        (contMatriz[contLinha][contColuna]==50 || contMatriz[contLinha][contColuna]==60) || 
        (contMatriz[contLinha][contColuna]==70 || contMatriz[contLinha][contColuna]==80) ||
        contMatriz[contLinha][contColuna]==90
      ){
        media2 += contMatriz[contColuna][contColuna];
      }
    }
    if(
      (contMatriz[contLinha][contColuna]==10 || contMatriz[contLinha][contColuna]==20) ||
      (contMatriz[contLinha][contColuna]==30 || contMatriz[contLinha][contColuna]==40) ||
      (contMatriz[contLinha][contColuna]==50 || contMatriz[contLinha][contColuna]==60) || 
      (contMatriz[contLinha][contColuna]==70 || contMatriz[contLinha][contColuna]==80) ||
      contMatriz[contLinha][contColuna]==90
    ){
      media1 += contMatriz[contLinha][contLinha];
    }
    contTodos++;
  }

  printf("\n Todos os elementos das colunas pares \n");
  while(cont<=contTodosPar){
    printf("\n --> %.2f \n", contPar[cont][cont]); cont++;
  }
  printf(
    "\n Soma de todos os elementos das colunas Impares:\n --> %.2f \n", 
    somaImpar
  );

  printf("\n Media da Coluna: %.2f", (media2 / 100));
  printf("\n Media da Linha: %.2f", (media1 / 100));
  
  pausar();
  return 0;
}
