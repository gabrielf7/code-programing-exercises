#include <stdio.h>
#include <stdlib.h>

void pausar(){
	printf("\nPressione alguma tecla para continuar...");
	getch();
}

int main(){
	float num1, num2, resultado;
	int op;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("\nEscolha a operacao:\n"
		"[1] Adicao  | [2] Subtracao\n"
		"[3] Divisao | [4] Multiplicacao\n"
		"\nSua Escolha: "
	); scanf("%d", &op);
	if (op == 1){
		resultado = num1 + num2;
		printf("O Resultado eh: %.2f \n", resultado);
	}else{
		if (op == 2){
			resultado = num1 - num2;
			printf("O Resultado eh: %.2f \n", resultado);
		}else{
			if ((op == 3) && (num2 == 0)){
				printf("Nao eh possovel dividir por zero");
			}else{
				resultado = num1 / num2;
				printf("O Resultado eh: %.2f \n", resultado);
				if (op == 4){
					resultado = num1 * num2;
					printf("O Resultado eh: %.2f \n", resultado);
				}else{
					printf("Voce errou \n");
				}
			}
		}
	}
	pausar();
	return (0);
}
