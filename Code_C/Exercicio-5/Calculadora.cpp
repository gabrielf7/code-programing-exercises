#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2, resultado;
	int op;
	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	printf("Escolha a operacao: [1] Adicao | [2] Subtracao | [3] Divisao | [4] Multiplicacao: \n");
	printf("Sua Escolha: ");
	scanf("%d", &op);	
	if(op == 1){
	   resultado = num1+num2;
	   printf("O Resultado eh: %f \n", &resultado);
    }else{
	    if(op == 2){
	      res
	      printf("O Resultado eh: %f \n", &resultado);
        }else{
	        if(op == 3 && num2 == 0){
               printf("Não é possível dividir por zero");
            }else{
           	      resultado = num1/num2;
                  printf("O Resultado eh: %f \n", &resultado);
	            if(op == 4){
	              resultado = num1*num2;
	              printf("O Resultado eh: %f \n", &resultado);
	            }else{
	                printf("Voce errou \n");
    }	 
    system("PAUSE");
    return(0);
}
