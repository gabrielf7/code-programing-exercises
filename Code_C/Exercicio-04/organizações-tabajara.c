#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pausar(){
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main(){
  float salario_a, n_salario, aumento;
  char porcentagem[5];

  printf("**********************************************************************************************\n");
  printf("-----------------------------------------Formulario-------------------------------------------\n");
  printf("Digite seu salario atual: ");
  scanf("%f", &salario_a);

  if (salario_a <= 280){
    aumento = salario_a * 0.2;
    strcpy(porcentagem, "20%");
  }else{
    if (salario_a <= 700){
      aumento = salario_a * 0.15;
      strcpy(porcentagem, "15%");
    }else{
      if (salario_a <= 1500){
        aumento = salario_a * 0.1;
        strcpy(porcentagem, "10%");
      }else{
        if (salario_a > 1500){
          aumento = salario_a * 0.05;
          strcpy(porcentagem, "5%");
        }
      }
    }
  }
  printf("-----------------------------------------Resultado--------------------------------------------\n");
  printf("\nO salario antes do reajuste;........................ %.2f ", salario_a);
  printf("\nO percentual de aumento aplicado;................... %s ", porcentagem);
  printf("\nO valor do aumento;................................. %.2f ", aumento);
  printf("\nO novo salario, apos o aumento...................... %.2f \n", salario_a + aumento);
  printf("**********************************************************************************************\n");

  pausar();
  return (0);
}
