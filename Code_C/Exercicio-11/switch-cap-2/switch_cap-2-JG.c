#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
	int true = 0;
	int op = 0, numeroInt1, numeroInt2, numeroInt3, porcento, resultadoInt, resultadoInt1, resultadoInt2, resultadoInt3;
	int i=0, adicao, soma, subtracao, idade, resultadoIntFinal, tamanho, numeroplc1;
	float numero1, numero2, numero3, resultado, maior, menor, meio, media;
	float salario_B, isento=0, inss, saldo;
	char nome[40], tipoUser[40], validao[2], convt[4], convt1[1], numeroplc[1];

	while(true != 1) {
		i = i + 1;
		// if(i >= 2){
		// 	getchar();
		// 	printf("\n Deseja continuar? Sim(aperte 's') ou Nao(aperte 'n') \n Resposta:_");
		// 	fgets(validao, 2, stdin);

		// 	if(strcmp(validao, "S") != strcmp(validao, "S") != strcmp(validao, "S") != strcmp(validao, "S")){
		// 		printf("\n Erro, a resposta deve ser apenas 'sim' de sim ou 'nao' para nao. \n");
		// 		break;
		// 		// printf(" Digite novamente a resposta.\n Resposta:_");
		// 		// fgets(validao, 2, stdin);
		// 	}
			
		// 	if(strcmp(validao, "N") or strcmp(validao, "n")){
		// 		printf("\n Programa encerrado com sucesso...\n");
		// 		exit(1);
		// 	} //Sair

		// }

		if((i == 1) || strcmp(validao, "S") || strcmp(validao, "s")){

			printf("\n ------------------------------------------------------------------------------------------> \n");
			printf(
				"* ---- * Opcoes do Programa * ---- *"
				"\n --> 01 - Descubra se o numero eh maior que 10."
				"\n --> 02 - Efetue uma adicao e verifique bonus ou nao."
				"\n --> 03 - Exibida caso um numero for divisivel por 3 ou nao."
				"\n --> 04 - Conferir um numero e verificar se eh ou nao \n divisivel por 5."
				"\n --> 05 - Conferir um numero e verificar se eh ou nao \n divisivel por 3 ou 7."
				"\n --> 06 - Descubra se uma linha credito deve ser ou nao \n concedida. "
				"\n --> 07 - Confira se um numero esta ou nao entre 20 e 50."
				"\n --> 08 - Informe um numero para receber uma mensagens. "
				"\n --> 09 - Descubra sua idade. "
				"\n --> 10 - Exiba tres numeros em ordem crescente. "
				"\n --> 11 - Verificar o maior numero. "
				"\n --> 12 - Idade de uma pessoa e informe alguns dados. "
				"\n --> 13 - Informe media de duas notas. "
				"\n --> 14 - Desconto do INSS. "
				"\n --> 15 - Produto versus Lucro. "
				"\n --> 16 - Idade e categoria do nadador. "
				"\n --> 17 - Mensalidades dos planos de saude. "
				"\n --> 18 - ..Secreta.. "
				"\n --> 19 - Campeonato nacional de arco-e-flecha. "
				"\n --> 20 - Conceder credito especial. "
				"\n --> 21 - Livro que sera emprestado. "
				"\n --> 22 - Percurso em quilometros. "
				"\n --> 23 - Informar a quantidade total de calorias consumidas.  "
				"\n --> 24 - Informar qual o mes eh o emplacamento deve ser \n renovado. "
				"\n --> 25 - Niveis de poluicao por indices."
				"\n Selecione o zero[0] se quiser sair.\n "
			);
			printf("Sua Escolha:_");
			scanf("%d", &op);
			while((op < 0) || (op > 25)) {
				printf("\n [Erro]: O programa apenas aceita numeros das opcoes, de 1 ate 25 ou 0 para sair. \n");
				printf(" Digite novamente sua escolha:_");
				scanf("%d", &op);
			}
			switch(op) {
				case 1:
					printf("\n Informe um numero inteiro: ");
					scanf("%d", &numeroInt1);
					printf("\n Informe outro numero inteiro: ");
					scanf("%d", &numeroInt2);

					adicao = numeroInt1 + numeroInt2;

					if(adicao > 10) {
						printf("\n Esse eh o numero inteiro maior que dez: %d \n", adicao);
					}
				break;
				case 2:
					printf("\n Informe um numero inteiro: ");
					scanf("%d", &numeroInt1);
					printf("\n Informe outro numero inteiro: ");
					scanf("%d", &numeroInt2);

					adicao = numeroInt1 + numeroInt2;

					if(adicao > 20) {
						soma = adicao + 8;
						printf("\n Esse eh o numero inteiro maior que vinte: %d \n", soma);
					}else if(adicao <= 20){
						subtracao = adicao - 5;
						printf("\n Esse eh o numero inteiro menor que vinte: %d \n", subtracao);
					}
				break;
				case 3:
					printf("\n Informe um numero inteiro: ");
					scanf("%d", &numeroInt1);

					if((numeroInt1 % 3) == 0) {
						printf("\n --> Eh multiplo de 3. \n");
					}else{
						printf("\n --> Nao eh multiplo de 3. \n");
					}
				break;
				case 4:
					printf("\n Informe um numero inteiro: ");
					scanf("%d", &numeroInt1);

					if((numeroInt1 % 5) == 0) {
						printf("\n --> Eh multiplo de 5. \n");
					}else{
						printf("\n --> Nao eh multiplo de 5. \n");
					}
				break;
				case 5:
					printf("\n Informe um numero inteiro: ");
					scanf("%d", &numeroInt1);

					if(((numeroInt1 % 3) == 0) && ((numeroInt1 % 7) == 0)) {
						printf("\n --> Eh multiplo de 3 ou 7. \n");
					}else{
						printf("\n --> Nao eh multiplo de 3 ou 7. \n");
					}
				break;
				case 6:
					printf("\n Informe o salario bruto: ");
					scanf("%f", &numero1);
					printf("\n Informe o valor da prestacao: ");
					scanf("%f", &numero2);

					resultado = numero1 * 0.30; 

					if(numero2 <= resultado) {
						printf("\n --> O emprestimo pode ser concedido. \n");
					}else{
						printf("\n --> O emprestimo nao pode ser concedido. \n");
					}
				break;
				case 7:
					printf("\n Informe um numero: ");
					scanf("%f", &numero1);

					if((numero1 >= 20) && (numero1 <= 50)) {
						printf("\n --> O numero eh compreendido entre 20 e 50. \n");
					}else{
						printf("\n --> O numero nao eh compreendido entre 20 e 50. \n");
					}
				break;
				case 8:
					printf("\n Informe um numero: ");
					scanf("%f", &numero1);

					if(numero1 == 20) {
						printf("\n --> Igual a 20. \n");
					}else if(numero1 > 20) {
						printf("\n --> Maior do que 20. \n");
					}else{	
						printf("\n --> Menor do que 20. \n");
					}
				break;
				case 9:
					printf("\n Informe o ano de nascimento: ");
					scanf("%d", &numeroInt1);
					printf("\n Agora, informe o ano atual: ");
					scanf("%d", &numeroInt2);

					if(numeroInt1 < numeroInt2) {
						resultadoInt = numeroInt2 - numeroInt1;
						printf("\n --> Idade de acordo com os anos fornecidos \n --> Idade:_ %danos \n", resultadoInt);
					}else{
						printf("\n --> Ano de nascimento invalido. \n");
					}
				break;
				case 10:
					printf("\n Informe primeiro numero: ");
					scanf("%f", &numero1);
					printf("\n Informe segundo numero: ");
					scanf("%f", &numero2);
					printf("\n Informe terceiro numero: ");
					scanf("%f", &numero3);

					if(((numero1 > numero2) && (numero2 > numero3)) || (numero1 == numero2)) {
						maior = numero1;
						meio = numero2;
						menor = numero3;
					}else if(((numero1 > numero3) && (numero3 > numero2)) || (numero1 == numero3)) {
						maior = numero1;
						meio = numero3;
						menor = numero2;
					}else if((numero2 > numero1) && (numero1 > numero3)) {
						maior = numero2;
						meio = numero1;
						menor = numero3;
					}else if(((numero2 > numero3) && (numero3 > numero1)) || (numero2 == numero3)) {
						maior = numero2;
						meio = numero3;
						menor = numero1;
					}else if((numero3 > numero1) && (numero1 > numero2)) {
						maior = numero3;
						meio = numero1;
						menor = numero2;
					}else if((numero3 > numero1) && (numero2 > numero1)) {
						maior = numero3;
						meio = numero2;
						menor = numero1;
					}
						
					printf("\n Maior:....[%.2f] \n Meio:.....[%.2f] \n Menor:....[%.2f] \n", maior, meio, menor);
				break;
				case 11:
					printf("informe primeiro numero: ");
					scanf("%f", &numero1);

					printf("informe primeiro numero: ");
					scanf("%f", &numero2);

					printf("informe primeiro numero: ");
					scanf("%f", &numero3);

					if(((numero1>numero2) && (numero1>numero3)) || (numero1>numero2==numero3)) {
						maior=numero1;
					}else{
						if(((numero2>numero1) && (numero2>numero3)) || (numero2>numero1==numero3)) {
							maior=numero2;
						}else{
							if(((numero3>numero1) && (numero3>numero2)) || (numero3>numero1==numero2)) {
								maior=numero3;
							}
						}
					}
					
					printf("\n A maior numero eh:--> %d \n", maior);
				break;
				case 12:
					printf("\n Digite sua idade:_");
					scanf("%d", &idade);
					
					if(idade <= 0) {
						printf(" [Alerta: Numero invalido.] \n");
						printf(" Digite um numero acima de 0: ");
						scanf("%d", &idade);
					}
					if(idade > 0) {
						if((idade >= 0) && (idade < 18)) {
							printf("\n Menor de idade.\n");
						}else{
							if((idade >= 18) && (idade < 65)) {
								printf("\n Maior de idade.\n");
							}else{
								if(idade >= 65) {
									printf("\n Maior de 65 anos.\n");
								}
							}
						}
					}
				break;
				case 13:
					getchar();
					printf("\n Digite seu nome:_");
					fgets(nome, 40, stdin);

					printf("\n Digite a nota da prova 1:_");
					scanf("%f", &numero1);
					if((numero1 < 0) || (numero1 > 10)) {
						printf(" [Alerta: Numero invalido. Digite um numero entre 0 e 10.] \n");
						printf("\n Digite a nota da prova 1:_");
						scanf("%f", &numero1);
					}

					printf("\n Digite a nota da prova 2:_");
					scanf("%f", &numero2);
					if((numero2 < 0) || (numero2 > 10)) {
						printf(" [Alerta: Numero invalido. Digite um numero entre 0 e 10.] \n");
						printf("\n Digite a nota da prova 2:_");
						scanf("%f", &numero2);
					}

					if(((numero1 >= 0) && (numero2 >= 0)) && ((numero1 <= 10) && (numero2 <= 10))) {
						media = (numero1 + numero2)/2;
						if((media >= 7)) {
							printf("\n Nome: %s Nota: [%.2f] \n Status na Disciplina: Aprovado.\n", nome, media);
						}else{
							if((media >= 3)) {
								printf("\n Nome: %s Nota: [%.2f] \n Status na Disciplina: Em Prova Final.\n", nome, media);
							}else{
								if(media < 3) {
									printf("\n Nome: %s Nota: [%.2f] \n Status na Disciplina: Reprovado.\n", nome, media);
								}
							}
						}
					}
				break;
				case 14:
					printf("\n Digite o valor do seu salario:_R$");
					scanf("%f", &salario_B);
						
					if(salario_B <= 600){
						inss = (salario_B*isento) + salario_B;
						porcento = 0;
					}else{
						if((salario_B > 600)&&(salario_B <= 1200)){
							inss = salario_B*0.20;
							porcento = 20;
						}else if((salario_B > 1200)&&(salario_B <= 2000)){
							inss = salario_B*0.25;
							porcento = 25;
						}else if((salario_B > 1200)){
							inss = salario_B*0.30;
							porcento = 30;
						}
					}
					printf("\n INSS (%d-PORCENTO): R$ %.2f \n", porcento, inss);
				break;
				case 15:
					printf("\n Informe valor do produto: R$ ");
					scanf("%f", &numero1);

					if(numero1 < 20) {
						resultado = numero1 - (numero1 * 0.45);
						printf("\n Valor do Lucro (45porc): R$ %.2f \n", resultado);
					}else if(numero1 >= 20) {
						resultado = numero1 - (numero1 * 0.30);
						printf("\n Valor do Lucro (30porc): R$ %.2f \n", resultado);
					}
				break;
				case 16:
					printf("\n Informe a idade do nadador: ");
					scanf("%d", &idade);

					if((idade >= 5) && (idade <= 7)) {
						printf("\n Resultado Final \n Categoria Infantil A");
					}else{
						if((idade >= 8) && (idade <= 10)) {
							printf("\n Resultado Final--> Categoria Infantil B");
						}else if((idade >= 11) && (idade <= 13)) {
							printf("\n Resultado Final--> Categoria Juvenil A");
						}else if((idade >= 14) && (idade <= 17)) {
							printf("\n Resultado Final--> Categoria Juvenil B");
						}else if(idade > 18) {
							printf("\n Resultado Final--> Categoria Senior");
						}
					}
				break;
				case 17:
					getchar();
					printf("\n Informe o nome: ");
					fgets(nome, 40, stdin);
					printf("\n Informe a idade: ");
					scanf("%d", &idade);

					if(idade < 10) {
						printf("\n Nome: %s \n Valor que devera pagar eh: R$ 30.00 \n", nome);
					}else{
						if((idade >= 10) && (idade < 29)) {
							printf("\n Nome: %s \n Valor que devera pagar eh: R$ 60.00 \n", nome);
						}else if((idade >= 29) && (idade < 45)) {
							printf("\n Nome: %s \n Valor que devera pagar eh: R$ 120.00 \n", nome);
						}else if((idade >= 45) && (idade < 59)) {
							printf("\n Nome: %s \n Valor que devera pagar eh: R$ 150.00 \n", nome);
						}else if((idade >= 59) && (idade < 65)) {
							printf("\n Nome: %s \n Valor que devera pagar eh: R$ 250.00 \n", nome);
						}else if(idade >= 65) {
							printf("\n Nome: %s \n Valor que devera pagar eh: R$ 40.00 \n", nome);
						}
					}
				break;
				case 18:
					//file: quest18-swicht-exibir-mes.cpp
				break;
				case 19:
					printf("\n Informe os pontos obtidos por cada jogador da equipe \n");

					printf("\n Jogador [ 1 ]: ");
					scanf("%d", &numeroInt1);
					printf("\n Jogador [ 2 ]: ");
					scanf("%d", &numeroInt2);
					printf("\n Jogador [ 3 ]: ");
					scanf("%d", &numeroInt3);
					
					media = (numeroInt1 + numeroInt2 + numeroInt3)/3;

					if(numeroInt1 < numeroInt2) {
						menor = numeroInt1;
						numeroInt1 = numeroInt2;
						numeroInt2 = menor;
					}

					if(numeroInt1 < numeroInt3) {
						menor = numeroInt1;
						numeroInt1 = numeroInt3;
						numeroInt3 = menor;
					}

					if(numeroInt2 < numeroInt3) {
						menor = numeroInt2;
						numeroInt2 = numeroInt3;
						numeroInt3 = menor;
					}
					
					if(media <= 100) {
						printf("\n <----------------Resultado-----------------> \n");
						printf("\n Pontos: %d \n", numeroInt1);
						printf("\n Pontos: %d \n", numeroInt2);
						printf("\n Pontos: %d \n", numeroInt3);
						printf("\n Equipe Desclassificada \n");
					}else if(media > 100){
						printf("\n <----------------Resultado-----------------> \n");
						printf("\n Media: %d \n", media);
						printf("\n Pontos: %d \n", numeroInt1);
						printf("\n Pontos: %d \n", numeroInt2);
						printf("\n Pontos: %d \n", numeroInt3);
						printf("\n Equipe Classificada \n");
					}
				break;
				case 20:
					printf("\n Digite o valor do saldo medio:_R$");
					scanf("%f", &saldo);
						
					if((saldo >= 0)&&(saldo <= 500)){
						resultado = (saldo*isento) + saldo;
						porcento = 0;
					}else{
						if((saldo > 501)&&(saldo <= 1000)){
							resultado = saldo*0.30;
							porcento = 30;
						}else if((saldo > 1001)&&(saldo <= 3000)){
							resultado = saldo*0.40;
							porcento = 40;
						}else if((saldo > 3001)){
							resultado = saldo*0.50;
							porcento = 50;
						}
					}
					printf("\n Saldo Medio: R$ %.2f \n Valor do Credito(%d-PORC): R$ %.2f \n", saldo, porcento, resultado);
				break;
				case 21:
					getchar();
					printf("\n Informe o nome do Livro: ");
					fgets(nome, 40, stdin);
					printf(
						"\n Infome o tipo de usuario de acordo com a numeracao "
						"\n -> Professor [1] || -> Aluno [2]: \n Escolha_ "
					);
					scanf("%d", &numeroInt1);

					if(numeroInt1 == 1) {
						printf("\n Nome do Livro: %s Tipo de usuario: Professor. \n Todos os dias: 10 dias. \n", nome);
					}else{
						if(numeroInt1 == 2) {
							printf("\n Nome do Livro: %s Tipo de usuario: Aluno. \n Todos os dias: 03 dias. \n", nome);
						}
					}
				break;
				case 22:
					printf("\n Informe o percurso em quilometros: ");
					scanf("%d", &numeroInt1);
					printf(
						"\n Informe o tipo de carro de acordo com a numeracao "
						"\n -> Esportivo(TIPO B) [1] "
						"\n -> Tradicional(TIPO C) [2] "
						"\n -> Futurista(TIPO A) [3]: "
						"\n Escolha_ "
					);
					scanf("%d", &numeroInt2);

					if(numeroInt2 == 1){
						resultado = numeroInt1/9;
					}else{
						if(numeroInt2 == 2){
							resultado = numeroInt1/8;
						}else if(numeroInt2 == 3){
							resultado = numeroInt1/12;
						}
					}
					printf("\n Consumo estimado de combustivel: %.2fL \n", resultado);
				break;
				case 23:
					printf("\n Informe a refeicao que deseja \n");
					printf(
						"\n Informe o Prato de acordo com a numeracao "
						"\n -> Vegetariano [1] "
						"\n -> Peixe       [2] "
						"\n -> Frango      [3] "
						"\n -> Carne       [4] "
						"\n Escolha_ "
					);
					scanf("%d", &numeroInt1);
					printf(
						"\n Informe a Sobremesa de acordo com a numeracao "
						"\n -> Abacaxi          [1] "
						"\n -> Sorvete diet     [2] "
						"\n -> Mousse diet      [3] "
						"\n -> Mousse chocolate [4] "
						"\n Escolha_ "
					);
					scanf("%d", &numeroInt2);
					printf(
						"\n Informe a Bebida de acordo com a numeracao "
						"\n -> Cha                [1] "
						"\n -> Suco de laranja    [2] "
						"\n -> Suco de melao      [3] "
						"\n -> Refrigerante diet  [4] "
						"\n Escolha_ "
					);
					scanf("%d", &numeroInt3);
						
					if(numeroInt1 == 1){
						resultadoInt1 = 180;
					}else{
						if(numeroInt1 == 2){
							resultadoInt1 = 230;
							
						}else if(numeroInt1 == 3){
							resultadoInt1 = 250;
							
						}else if(numeroInt1 == 4){
							resultadoInt1 = 350;
							
						}
					}

					if(numeroInt2 == 1){
						resultadoInt2 = 75;
					}else{
						if(numeroInt2 == 2){
							resultadoInt2 = 110;
							
						}else if(numeroInt2 == 3){
							resultadoInt2 = 170;
							
						}else if(numeroInt2 == 4){
							resultadoInt2 = 200;
							
						}
					}

					if(numeroInt3 == 1){
						resultadoInt3 = 20;
					}else{
						if(numeroInt3 == 2){
							resultadoInt3 = 70;
							
						}else if(numeroInt3 == 3){
							resultadoInt3 = 100;
							
						}else if(numeroInt3 == 4){
							resultadoInt3 = 65;
							
						}
					}

					resultadoIntFinal = resultadoInt1 + resultadoInt2 + resultadoInt3;

					printf("\n Quantidade total de calorias da refeicao: %d cal \n", resultadoIntFinal);
				break;
				case 24: 
					printf("\n Informe a numeracao da placa do carro: ");
					scanf("%d", &numeroInt1);

					sprintf(convt, "%d", numeroInt1);

					tamanho = strlen(convt);

					numeroplc[0] = toupper(convt[tamanho-1]);

					// numeroInt2 = atoi(numeroplc);

					if(numeroplc[0] == '1') {
						printf("\n ----> O emplacamento deve ser renovado em Janeiro [1] <----\n");

					} //Janeiro
					if(numeroplc[0] == '2') {
						printf("\n ----> O emplacamento deve ser renovado em Fevereiro [2] <----\n");

					} //Fevereiro
					if(numeroplc[0] == '3') {
						printf("\n ----> O emplacamento deve ser renovado em Marco [3] <----\n");

					} //Marco
					if(numeroplc[0] == '4') {
						printf("\n ----> O emplacamento deve ser renovado em Abril [4] <----\n");

					} //Quarta-Feira
					if(numeroplc[0] == '5') {
						printf("\n ----> O emplacamento deve ser renovado em Maio [5] <----\n");

					} //Maio
					if(numeroplc[0] == '6') {
						printf("\n ----> O emplacamento deve ser renovado em Junho [6] <----\n");

					} //Junho
					if(numeroplc[0] == '7') {
						printf("\n ----> O emplacamento deve ser renovado em Julho [7] <----\n");

					} //Julho
					if(numeroplc[0] == '8') {
						printf("\n ----> O emplacamento deve ser renovado em Agosto [8] <----\n");

					} //Agosto
					if(numeroplc[0] == '9') {
						printf("\n ----> O emplacamento deve ser renovado em Setembro[9] <----\n");

					} //Setembro
					if(numeroplc[0] == '0') {
						printf("\n ----> O emplacamento deve ser renovado em Outubro, Novembro ou Dezembro <----\n");

					} //Outubro, Novembro ou Dezembro.

					// printf(" Mes: %c", convt[tamanho-1]);

				break;
				case 25:
					printf("\n Digite o indice da poluicao(ex: 0.15): ");
					scanf("%f", &numero1);

					if((numero1 >= 0) && (numero1 < 0.3)) {
						printf("\n Indice de poluicao permitido. \n");
					}else{
						if((numero1 >= 0.3) && (numero1 < 0.4)) {
							printf("\n ----> O 1 grupo recebera intimicao. \n");
						}else if((numero1 >= 0.4) && (numero1 < 0.5)) {
							printf("\n ----> O 1 e 2 grupos receberam intimicao. \n");
						}else if(numero1 >= 0.5) {
							printf("\n ----> O 1, 2 e 3 grupos receberam intimicao. \n");
						}
					}
				break;
				case 0:
					printf("\n Programa utilizado %d vezes \n", i);
					printf("\n Programa encerrado com sucesso...\n");
					exit(1);
				default: //Default
					printf("\n Opcao Invalida");
					break;
			}
		}
	}
	pausar();
	return(0);
}
