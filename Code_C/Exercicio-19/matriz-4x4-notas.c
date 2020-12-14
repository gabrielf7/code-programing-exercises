#include <stdio.h>
#include <stdlib.h>

void pausar(void) {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
  float sumNotas[4][2], somaN[1];
  int linha, coluna;

  for (linha = 1; linha <= 2; linha++){
    for (coluna = 1; coluna <= 3; coluna++){
      printf("Informe a %d nota do %d aluno: ", coluna, linha);
      scanf("%f", &sumNotas[linha][coluna]);
    }
    sumNotas[linha][3] = ((sumNotas[linha][0] + sumNotas[linha][1] + sumNotas[linha][2]) / 3);
  
  }
  for (linha = 1; linha <= 2; linha++){
    printf("\n [%d]Aluno - Nota Final............: %.2f", linha, sumNotas[linha][3]);
    for (coluna = 1; coluna <= 3; coluna++){
      if(coluna != 2){
       somaN[0] += sumNotas[linha][coluna];
      }else{
       somaN[0] += sumNotas[linha][coluna];
      }
    }
    printf("\n N: %.2f", somaN[0]);
  
  }
  pausar();
	return(0);
}