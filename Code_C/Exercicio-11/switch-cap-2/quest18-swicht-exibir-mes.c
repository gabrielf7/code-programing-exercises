#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){
	int true = 0;
  int op = 0;

  while(true != 1) {
    printf("\n Digite um numero inteiro de acordo com o mes do ano --> (Aperte 0 para sair):\n _");
    scanf("%d", &op);
    while((op < 0) || (op > 12)) {
      printf("\n Erro, o programa so aceita numeros entre 1 e 12, sendo 0 para sair do programa.\n");
      printf("\n Digite um numero inteiro de acordo com o dia da semana(Aperte 0 para sair):\n _");
      scanf("%d", &op);
    }
    switch(op) {
    case 1: //Janeiro
      printf("\n ----> Esse eh o mes de Janeiro [1] <----\n");
      break;
    case 2: //Fevereiro
      printf("\n ----> Esse eh o mes de Fevereiro [2] <----\n");
      break;
    case 3: //Marco
      printf("\n ----> Esse eh o mes de Marco [3] <----\n");
      break;
    case 4: //Quarta-Feira
      printf("\n ----> Esse eh o mes de Abril [4] <----\n");
      break;
    case 5: //Maio
      printf("\n ----> Esse eh o mes de Maio [5] <----\n");
      break;
    case 6: //Junho
      printf("\n ----> Esse eh o mes de Junho [6] <----\n");
      break;
    case 7: //Julho
      printf("\n ----> Esse eh o mes de Julho [7] <----\n");
      break;
    case 8: //Agosto
      printf("\n ----> Esse eh o mes de Agosto [8] <----\n");
      break;
    case 9: //Setembro
      printf("\n ----> Esse eh o mes de Setembro[9] <----\n");
      break;
    case 10: //Outubro
      printf("\n ----> Esse eh o mes de Outubro [10] <----\n");
      break;
    case 11: //Novembro
      printf("\n ----> Esse eh o mes de Novembro [11] <----\n");
      break;
    case 12: //Dezembro
      printf("\n ----> Esse eh o mes de Dezembro [12] <----\n");
      break;
    case 0: //Sair
      printf("\n Programa encerrado com sucesso... \n");
      exit(1);
    default: //Default
      printf("\n Opcao Invalida");
      break;
    }
  }
  pausar();
  return (0);
}
