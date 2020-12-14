#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main() {
	int true = 0, op = 0, cont = 1, cont1 = 1;
	int idade, soma, vetor1[15];
	int numeroInt1, numeroInt2, numeroInt3, status[15];
	int resultadoInt1, resultadoInt2, resultadoInt3;
	float numero1, numero2, numero3, subtracao;
	float resultado1, resultado2, resultado3, media;
	char nome[40], sexo[2], letra[10];

	//5Q
	float notaP1[15], notaP2[15], mediaN[15];

	//6Q 
	float salario[20], salarioR[20];

	//7Q
	float pCompra[100], pVenda[100];

	//8Q
	int escolha, codigo[3], quantidade[3];
	float valorC[3], valorV[3];

	//9Q
	int cnjvetor1[10], cnjvetor2[10], cnjvetor3[10];

	//10Q
	int cmpvetor1[10], w[10], componentes;

	while(true != 1) {
		printf("\n ------------------------------------------------------------------------------------------> \n");
		printf(
			"* ---- * Opcoes do Programa * ---- *"
			"\n --> 01 - ... "
			"\n --> 02 - ... "
			"\n --> 03 - ... "
			"\n --> 04 - ... "
			"\n --> 05 - ... "
			"\n --> 06 - ... "
			"\n --> 07 - ... "
			"\n --> 08 - ... "
			"\n --> 09 - ... "
			"\n --> 10 - ... "
			// "\n --> 11 - ... "
			// "\n --> 12 - ... "
			// "\n --> 13 - ... "
			// "\n --> 14 - ... "
			// "\n --> 15 - ... "
			// "\n --> 16 - ... "
			// "\n --> 17 - ... "
			// "\n --> 18 - ... "
			// "\n --> 19 - ... "
			// "\n --> 20 - ... "
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
				cont = 1;
				numeroInt2 = 0;
				
				while(cont <= 15) { //15
					printf("\n Digite 15 numeros: ");
					scanf("%d", &vetor1[cont]); cont++;
				}
				for(cont=0; cont<=15; cont++) {
					if(cont == 1) {
						printf("\n Diga um numero entre 1 e 15, para descobrir sua posicao no vetor:\n _ ");
						scanf("%d", &numeroInt1);
					}
					if(numeroInt1 == vetor1[cont]) {
						printf("\n Essa eh a posicao do numero no vetor:\n _ %d \n", cont);
						numeroInt2 = 2077;
						break;
					}
				}
				if(numeroInt2 == 0) {
					printf("\n Numero nao encontrado no vetor \n");
				}
			break;
			case 2:
				cont = 1;
				
				while(cont <= 10) { //10
					getchar();
					printf("\n Digite uma Letra: ");
					scanf("%c", &letra[cont]); cont++;
				}
				for(cont=0; cont<=10; cont++) {
					printf("\n Letra [%d]:_ %c \n", cont, letra[cont]);
				}
			break;
			case 3:
				cont = 1;

				while(cont <= 4) {
					printf("\n Digite 15 numeros: ");
					scanf("%d", &vetor1[cont]); cont++;
				}
				for(cont=0; cont<=4; cont++) {
					if((vetor1[cont] % 2) == 0) {
						printf("\n Numero [%d]: Eh Par. \n", vetor1[cont]);
					}else if((vetor1[cont] % 2) == 1) {
						printf("\n Numero [%d]: Eh Impar. \n", vetor1[cont]);
					}
				}
			break;
			case 4:
				cont = 1;
				resultadoInt1 = 0;

				while(cont <= 8) {
					printf("\n Digite 8 numeros: ");
					scanf("%d", &vetor1[cont]); 
					if((vetor1[cont] % 6) == 0) {
						resultadoInt1 += 1;
					}
					cont++;
				}
				for(cont=0; cont<=8; cont++) {
					printf("\n Numero do Vetor:[ %d ] \n", vetor1[cont]);
				}
				printf("\n Total de numero multipos de 6:[ %d ] \n", resultadoInt1);
			break;
			case 5:
				cont = 1;

				while(cont <= 15) { //15
					printf("\n [Nota 1] Aluno[%d]: ", cont); 
					scanf("%f", &notaP1[cont]); 
					printf("\n [Nota 2] Aluno[%d]: ", cont); 
					scanf("%f", &notaP2[cont]);

					mediaN[cont] = ((notaP1[cont] + notaP2[cont]) / 2); 

					if(mediaN[cont] >= 7)	{
						status[cont] = 2077;
					}else{
						status[cont] = 2020;
					}
					cont++;
				}
				for(cont=0; cont<=15; cont++) {
					if(status[cont] == 2077) {
						printf("\n [Status=Aprovado]---");
					}else if(status[cont] == 2020) {
						printf("\n [Status=Reprovado]--");
					}
					printf(
						" Aluno[%d] = P1 [%.2f] P2 [%.2f] Md [%.2f] \n", 
						cont, notaP1[cont], notaP2[cont], mediaN[cont]
					); 
				}
			break;
			case 6:
				cont = 1;

				while(cont <= 20) { //20
					printf("\nDigite o salario: \n"); 
					scanf("%f", &salario[cont]);
					salarioR[cont] = ((salario[cont] + (salario[cont]) * 0.08)); cont++;
				}
				for(cont=0; cont<20; cont++) {
					printf(
						"\n [Pessoa %d] \n Salario: R$ %.2f  Salario Reajustado: R$ %.2f \n", 
						cont, salario[cont], salarioR[cont]
					);
				}
			break;
			case 7:
				cont = 1;

				while(cont <= 100) { //100
					printf("\n Preco de compra do produto: R$"); 
					scanf("%f", &pCompra[cont]);
					printf("\n Preco de venda do produto: R$"); 
					scanf("%f", &pVenda[cont]);

					resultado1 = ((pVenda[cont] / pCompra[cont]) * 100); 

					if(resultado1 < 10) {
						numeroInt1 += 1;
					}else{
						if((resultado1 >= 10) && (resultado1 <= 20)) { 
							numeroInt2 += 1;
						}else if(resultado1 > 20){
							numeroInt3 += 1;
						}
					}
					cont++;
				}

				printf("\n Quantas mercadorias proporcionam lucro \n --> lucro < 10(porc) : %d \n", numeroInt1); 
				printf("\n --> 10(porc) <= lucro <= 20(porc): %d \n", numeroInt2); 
				printf("\n --> lucro > 20(porc): %d \n", numeroInt3);
			break;
			case 8:
				cont = 1;
				
				while(cont <= 3) { //3
					printf("\n Informe o codigo do produto: ");
					scanf("%d", &codigo[cont]);
					printf("\n Informe a quantidade do produto: ");
					scanf("%d", &quantidade[cont]);
					printf("\n Informe o valor de compra do produto: ");
					scanf("%f", &valorC[cont]);
					printf("\n Informe o valor de venda do produto: ");
					scanf("%f", &valorV[cont]); cont++;
				}
				printf(
					"\n [1] - Exibir todos os produtos."
					"\n [2] - Exibir produto pelo codigo."
				);
				printf(" \n Escolha:");
				scanf("%d", &escolha);

				if((escolha != 1) || (escolha != 2)) {
					printf("Essa opcao esta invalida. \n");
				}else{
					if(escolha == 1) {
						for(cont=0; cont<3; cont++) {
							printf("\n Codigo: %d Quantidade: %d \t", codigo[cont], quantidade[cont]);
							printf("\n Sobre Valores \n --> Compras: %.2f \n", valorC[cont]);
							printf("\n --> Vendas: %.2f \n", valorV[cont]);
						}
					}
					if(escolha == 2) {
						printf("\n Informe o codigo do produto:\n");
						scanf("%d", &escolha);
						for(cont=0; cont<3; cont++) {
							if(escolha == codigo[cont]) {
								printf("\n Codigo: %d Quantidade: %d \n", codigo[cont], quantidade[cont]);
								printf("\n Sobre Valores \n --> Compras: %.2f \n", valorC[cont]);
								printf("\n --> Vendas: %.2f \n", valorV[cont]);
								break;
							}
						}
					}
				}
			break;
			case 9:
				cont = 1;
				cont1 = 1;
				resultadoInt1 = 0; 

				printf("\n Digite ate 10 numeros para dois vetores[]\n");
				while(cont <= 10) { //10
					printf("\n [Vetor 1] Numero:\n"); 
					scanf("%d", &cnjvetor1[cont]);
					printf("\n [Vetor 2] Numero:\n"); 
					scanf("%d", &cnjvetor2[cont]); cont++;
				}
				for(cont=0; cont<10; cont++) {
					for(cont1=0; cont1<10; cont1++) {
						if(cnjvetor1[cont] == cnjvetor2[cont1]) {
							cnjvetor3[resultadoInt1] = cnjvetor1[cont1]; 
							resultadoInt1++; break;
						}
					} 
					cont++;
				}

				while(cont <= resultadoInt1) {
					printf("\n Comuns entre os conjuntos \n --> %d \n", cnjvetor3[cont]);
					cont++;
				}
			break;
			case 10:
				cont = 1;
				cont1 = 1;
				componentes = 0;

				while(cont <= 10) {
					printf("\nDigite 10 numero:\n"); 
					scanf("%d", &cmpvetor1[cont]); cont++;
				}

				for(cont=0; cont<10; cont++) { 
					componentes = 1;
					if(cmpvetor1[cont] == 1) {
						w[cont] = 1;
					}else {
						for(cont1=1; cont1<cmpvetor1[cont]; cont1++) {
							componentes = (componentes * (cont1 + 1));
						}
						w[cont] = componentes;
					}
				}
				while(cont <= 10) {
					printf("\n Numero: %d Fatorial: %d \n", cmpvetor1[cont], w[cont]);
					cont++;
				}
			break;
			case 11:
			break;
			case 12:
			break;
			case 13:
			break;
			case 14:
			break;
			case 15:
			break;
			case 16:
			break;
			case 17:
			break;
			case 18:
			break;
			case 19:
			break;
			case 20:
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
