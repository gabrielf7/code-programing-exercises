#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //funcao pausar so funciona com essa lib no cpp
#include <math.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
	int true = 0;
	int op = 0, numeroInt, numeroInt1;
	float numero1, numero2, numero3, adicao, subtracao, divisao, multiplicacao, celsius, lit, dist, presAcrescidaJuros;
	char nome[400], endereco[400], telefone[13];
	while(true != 1) {
		printf("\n ------------------------------------------------------------------------------------------> \n");
		printf(
			"* ---- * Opcoes do Programa * ---- *"
			"\n ----> 1 - Imprima o seu nome. "
			"\n ----> 2 - Imprima o produto dos valores 30 e 27."
			"\n ----> 3 - Media aritmetica entre os numeros 5, 8,12. "
			"\n ----> 4 - Leia e imprima um numero inteiro. "
			"\n ----> 5 - Leia dois numeros reais e os imprima. "
			"\n ----> 6 - Leia um numero inteiro e imprima o seu antecessor \n e o seu sucessor."
			"\n ----> 7 - Leia o nome, endereco e o telefone de um cliente, \n no final, imprima esses dados. "
			"\n ----> 8 - Leia dois numeros inteiros e imprima a subtracao deles. "
			"\n ----> 9 - Leia um numero real e imprima 1/4 deste numero. "
			"\n ----> 10 - Calcular a media aritmetica dos numeros reais."
			"\n ----> 11 - Leia dois numeros reais e calcule as quatro operacoes basicas. "
			"\n ----> 12 - Leia um numero real e calcule o quadrado deste numero. . "
			"\n ----> 13 - Leia o saldo de uma conta poupança com reajuste de 2 porcento. "
			"\n ----> 14 - Leia a base e a altura de um retângulo e imprima. "
			"\n ----> 15 - Leia o valor de um produto e desconto, depois imprima \n o valor do desconto e o que foi subtraido pelo desconto."
			"\n ----> 16 - Calcular o reajuste do salário de um funcionário. "
			"\n ----> 17 - Calcular a conversão entre graus centígrados e Fah-renheit. "
			"\n ----> 18 - Ler o tempo decorrido e a velocidade media de uma viagem. \n Em seguida aplicar as formulas (D=T*V) e (L=D/12). "
			"\n ----> 19 - Calcular o valor de uma prestação em atraso. "
			"\n ----> 20 - Efetuar uma conversão em dólar (US$) para real (R$). "
			"\n Selecione o zero[0] se quiser sair.\n "
		);
		printf("Sua Escolha:_");
		scanf("%d", &op);
		while((op < 0) || (op > 20)) {
			printf("\n [Erro]: O programa apenas aceita numeros das opcoes, de 1 ate 20 ou 0 para sair. \n");
			printf(" Digite novamente sua escolha:_");
			scanf("%d", &op);
		}
		switch(op) {
			case 1:
				getchar();
				printf("\n Informe seu nome para avaliacao: ");
				fgets(nome, 200, stdin);
				printf("\n Seu nome eh esse: %s \n", nome);
			break;
			case 2:
				numero1 = 30;
				numero2 = 27;
				printf("\n O produto entre esses dois numeros eh: %.2f \n", numero1 * numero2);
			break;
			case 3:
				numero1 = 5;
				numero2 = 8;
				numero3 = 12;
				printf("\n A media arimetica eh: %.2f \n", (numero1+numero2+numero3)/3);
			break;
			case 4:
				printf("\n Informe um numero inteiro: ");
				scanf("%d", &numeroInt);
				printf("\n Esse eh o um numero inteiro: %d \n", numeroInt);
			break;
			case 5:
				printf("\n Informe um numero real: ");
				scanf("%f", &numero1);
				printf("\n Informe outro numero real: ");
				scanf("%f", &numero2);
				printf("\n Esse sao os numeros reais: %.2f e %.2f\n", numero1, numero2);
			break;
			case 6:
				printf("\n Informe um numero inteiro: ");
				scanf("%d", &numeroInt);
				printf("\n Esse eh o numero inteiro: %d \n", numeroInt);
				printf("\n Esse eh o sucessor do numero inteiro: %d \n", numeroInt + 1);
				printf("\n Esse eh o antecessor do numero inteiro: %d \n", numeroInt - 1);
			break;
			case 7:
				getchar();
				printf("\n Informe seu nome para avaliacao: ");
				fgets(nome, 400, stdin);
				printf("\n Informe seu endereco para avaliacao: ");
				fgets(endereco, 400, stdin);
				printf("\n Informe seu telefone para avaliacao: ");
				fgets(telefone, 400, stdin);
				printf("\n -------------------------------------> \n");
				printf("\n Nome: %s \n Endereco: %s \n Telefone: %s \n", nome, endereco, telefone);
				printf("\n -------------------------------------> \n");
			break;
			case 8:
				printf(" Informe um numero inteiro: ");
				scanf("%f", &numero1);
				printf(" Informe outro numero inteiro: ");
				scanf("%f", &numero2);
				printf("\n A subtracao dos dois numeros eh: %.2f \n", (numero1 - numero2));
			break;
			case 9:
				printf("\n Informe um numero real: ");
				scanf("%f", &numero1);
				printf("\n O resultado de 1/4 desse numero real eh %.2f", numero1/4);
			break;
			case 10:
				printf("\n Informe um numero real: ");
				scanf("%f", &numero1);
				printf("\n Informe segundo numero real: ");
				scanf("%f", &numero2);
				printf("\n Informe terceiro numero real: ");
				scanf("%f", &numero3);
				printf("\n A media arimetica desses numeros eh: %.2f \n", (numero1+numero2+numero3)/3);
			break;
			case 11:
				printf("\n Informe um numero real: ");
				scanf("%f", &numero1);
				printf("\n Informe segundo numero real: ");
				scanf("%f", &numero2);
				adicao = numero1 + numero2;
				subtracao = numero1 - numero2;
				divisao = numero1 / numero2;
				multiplicacao = numero1 * numero2;
				printf(
					"\n Adicao: %.2f \n Subtrcao: %.2f \n Divisao: %.2f \n Multiplicacao: %.2f \n", 
					adicao, 
					subtracao, 
					divisao, 
					multiplicacao
				);
			break;
			case 12:
				printf("\n Informe um numero real: ");
				scanf("%f", &numero1);
				printf("\n O quadrado desse numero eh: %.2f \n", numero1 * numero1);
			break;
			case 13:
				printf("\n Informe o valor da conta poupanca para o reajuste de 2 porcento: \n Valor_");
				scanf("%f", &numero1);
				printf("\n O novo valor da conta agora eh de: %.2f \n", ((numero1 * 0.02) + numero1));
			break;
			case 14:
				printf("\n Informe a Altura do retangulo: ");
				scanf("%f", &numero1);
				printf("\n Informe a Base do retangulo: ");
				scanf("%f", &numero2);
				printf("\n Perímetro: %.2f \n Area: %.2f \n", 
					(numero2 + numero1),
					(numero2 * numero1)
				);
			break;
			case 15:
				printf("\n Informe o valor do produto: ");
				scanf("%f", &numero1);
				printf("\n Informe o percentual do desconto (ex: 2(porcento)): \n Valor_");
				scanf("%f", &numero2);
				printf("\n Valor do desconto: %.2f \n Valor do desconto aplicado no produto: %.2f \n", 
					(numero1 * (numero2/100)),
					(numero1 - (numero1 * (numero2/100)))
				);
			break;
			case 16:
				printf("\n Informe valor do salario atual: \n Valor_");
				scanf("%f", &numero1);
				printf("\n Valor de 20(porcento) do reajuste foi aplicado no salario. \n Valor atual pos reajuste: %.2f ", 
					((numero1 * 0.2) + numero1)
				);
			break;
			case 17:
				printf("\n Digite a temperatura em Celsius: ");
				scanf("%f", &celsius);
				printf("\n Celsius: %.2f \n Resultado da conversao \n Celsius para Fahrenheit: %.2f \n", 
					celsius, 
					(celsius*9 + 160)/5
				);
			break;
			case 18:
				printf("\n Informe tempo decorrido (em horas): ");
				scanf("%f", &numero1);
				printf("\n Informe a velocidade do veiculo: ");
				scanf("%f", &numero2);
				dist = numero1 * numero2;
				lit = dist/12;
				printf("\n A distancia foi de: %.2f \n Os Litros de combustivel consumidos foi de: %.2f \n", 
					dist, 
					lit
				);
			break;
			case 19:
				printf("\n Informe o valor da prestacao em atraso: ");
				scanf("%f", &numero1);
				printf("\n Informe a taxa periodica de juros (ex: 2(porcento)): \n Valor_");
				scanf("%f", &numero2);
				printf("\n Informe o periodo de atraso (em mes): ");
				scanf("%d", &numeroInt1);
				
				presAcrescidaJuros = (numero1 * (numero2/100) * numeroInt1); 

				printf("\n (Valor) Prestacao em atraso: R$ %.2f \n (Taxa) Taxa Periodica de juros: %.2f \n (Tempo) Periodo de atraso: %d mes \n (Valor) Prestacao acrescida de juros: R$ %.2f \n ", 
					numero1, 
					numero2,
					numeroInt1,
					presAcrescidaJuros
				);
			break;
			case 20:
				printf("\n Informe o valor em Dolar: $");
				scanf("%f", &numero1);
				printf("\n Informe o valor da cotacao do Dolar(ex: 5.29): \n Valor_R$");
				scanf("%f", &numero2);
				printf("\n Valor em Dolar: $%.2f \n Valor da cotacao do Dolar: R$%.2f \n Valor da conversao em Real: R$%.2f \n", 
					numero1,
					numero2,
					(numero1 * numero2)
				);
			break;
			case 0: //Sair
				printf("\n Programa encerrado com sucesso...\n");
				exit(1);
			default: //Default
				printf("\n Opcao Invalida");
				break;
		}
	}
	pausar();
	return(0);
}
