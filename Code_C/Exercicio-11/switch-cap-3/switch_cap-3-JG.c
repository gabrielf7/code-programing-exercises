#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <strings.h>

void pausar() {
  printf("\nPressione alguma tecla para continuar...");
  getch();
}

int main() {
	int true = 0, op = 0, cont = 1;
	int a = 0, b = 1, c = 0;
	int numeroInt1, numeroInt2, numeroInt3, idade, soma, media;
	int maiorI, menorI, restoD; 
	int resultadoInt1, contexecelente, contregular, contbom;
	int quantidade, dia, mes, ano;
	float numero1, numero2, numero3, numero4, adicao, subtracao;
	float divisao, multiplicacao, maiorCR, renda, somaf;
	float resultado1, resultado2, resultado3, mediaFinal;
	float mediaf, percentagem, maior, menor, mediaIdade;
	char nome[40], opiniao[120], telefone[400], sexo[2];

	//10Q
	int cont1, maisPesado, maisJovem;
	float mediaPeso, mediaPesoTotal, mediaIdadeTotal;

	//13Q
	int tipo, w, qtdResidencial, qtdComercial;
	float mediaResidencial, mediaComercial;

	//20Q
	int fluminense, botafogo, flamengo, vasco, torcOutros, torcFluminense, outros;

	//21Q
	int pMaior;
	float percAlimtF, percAlimtP, ouDespesas; 
	float percOuDespesasP, percOuDespesasF;

	//22Q
	int multMaior, carMaior;
	float divida;

	//23Q
	float maisAlta, altura, peso, maisPesadof, contIdade;

	//24Q 
	float tmp, distancia, consumo;

	//26Q
	float canal4, canal5, canal7, canal12; 
	float percC4, percC5, percC7, percC12;

	//28Q
	int maior50;
	float somaAltura, mediaAltura; 
	float percP40, menor40;

	//29Q
	float contAlimt, contHig, contLimpeza;
	char numCodigo[1];

	//30Q
	int  casado, solteiro, viuvo;
	float separado, iddViuvo, percSeparado;
	
	while(true != 1) {
		printf("\n ------------------------------------------------------------------------------------------> \n");
		printf(
			"* ---- * Opcoes do Programa * ---- *"
			"\n --> 01 Questao "
			"\n --> 02 Questao "
			"\n --> 03 Questao "
			"\n --> 04 Questao "
			"\n --> 05 Questao "
			"\n --> 06 Questao "
			"\n --> 07 Questao "
			"\n --> 08 Questao "
			"\n --> 09 Questao "
			"\n --> 10 Questao "
			"\n --> 11 Questao "
			"\n --> 12 Questao "
			"\n --> 13 Questao "
			"\n --> 14 Questao "
			"\n --> 15 Questao "
			"\n --> 16 Questao "
			"\n --> 17 Questao "
			"\n --> 18 Questao "
			"\n --> 19 Questao "
			"\n --> 20 Questao "
			"\n --> 21 Questao "
			"\n --> 22 Questao "
			"\n --> 23 Questao "
			"\n --> 24 Questao "
			"\n --> 25 Questao "
			"\n --> 26 Questao "
			"\n --> 27 Questao "
			"\n --> 28 Questao "
			"\n --> 29 Questao "
			"\n --> 30 Questao "
			"\n Selecione o zero[0] se quiser sair.\n "
		);
		printf("Sua Escolha:_");
		scanf("%d", &op);
		while((op < 0) || (op > 30)) {
			printf("\n [Erro]: O programa apenas aceita numeros das opcoes, de 1 ate 30 ou 0 para sair. \n");
			printf(" Digite novamente sua escolha:_");
			scanf("%d", &op);
		}
		switch(op) {
			case 1:
				while(cont <= 100) {
					printf(" Numero [%d] \n", cont);

					cont += 1;
				}
			break;
			case 2:
				cont = 100;
				while(cont >= 1) {
					if((cont >= 1)  &&  (cont <= 100)) {
						if((cont % 2) == 0) {
							printf(" O numero [%d] eh par. \n", cont);
						}
					}else{
						printf(" Acabou a cotacao de par. \n");
					}
					cont -= 1;
				}
			break;
			case 3:
				while(cont <= 500) {
					cont += 1;
					if((cont % 5) == 0) {
						printf(" O numero [%d] eh multiplo de 5. \n", cont);
					}
				}
			break;
			case 4:
				cont = 1;
				while(cont <= 20) {
					printf("\n [Pessoa %d] Nome: ", cont);
					fflush(stdin);
					fgets(nome, 40, stdin);
					printf("\n [Pessoa %d] Sexo: Masculino[m] ou Feminino[f]:_", cont);
					fflush(stdin);
					fgets(sexo, 2, stdin);
					printf("\n [Pessoa %d] Idade: ", cont);
					scanf("%d", &idade);

					if(((sexo[0] == 'm') || (sexo[0] == 'M'))  &&  (idade >= 21)) {
						printf("\n Nome: %s", nome);
					}else{
						printf("\n Nao permitido. \n");
					}

					cont += 1;
				}
			break;
			case 5:
				printf("\n Numero [1]: ");
				scanf("%d", &numeroInt1);
				if(numeroInt1 == 0) {
					printf("\n Valor invalido. \n");
				}else{
					printf("\n Numero [2]: ");
					scanf("%d", &numeroInt2);
					if(numeroInt2 == 0) {
						printf("\n Valor invalido. \n");
					}

					if(numeroInt1 > numeroInt2) {
						printf("\n Multiplicando || o deve seer menor. \n");
					}else{
						while(cont <= numeroInt2) {
							soma += numeroInt1;
							cont += 1;
						}
						printf("\n Total: %d \n", soma);
					}
				}
			break;
			case 6:
				printf("%d\n", a);
				printf("%d\n", b);

				while (c < 42){
					c = a + b;
					printf("%d\n", c);
					a = b;
					b = c;
				}
			break;
			case 7:
				cont = 1;
				while(cont <= 15) {
					printf("\n |Aluno [%d] Nome: ", cont);
					fflush(stdin);
					fgets(nome, 40, stdin);
					printf("\n |Aluno [%d] Nota [1]: ", cont);
					scanf("%f", &numero1);
					printf("\n |Aluno [%d] Nota [2]: ", cont);
					scanf("%f", &numero2);

					mediaf = (numero1 + numero2)/2;

					printf("\n Nome: %s Nota [1]: %.2f \n Nota [2]: %.2f \n", nome, numero1, numero2);
					printf("\n Media: %.2f \n", mediaf);

					mediaFinal += mediaf;
					cont += 1;
				}
				resultado1 = mediaFinal/15;
				printf("\n Resultado da media final da turma \n R:_ %.2f \n", resultado1);
			break;
			case 8:
				cont = 1;
				while(cont <= 10) {
					printf("\n [Pessoa %d] Nome: ", cont);
					fflush(stdin);
					fgets(nome, 40, stdin);
					printf("\n [Pessoa %d] Salario:_R$ ", cont);
					scanf("%f", &numero1);

					if(numero1 < 1300){
						resultado1 = (numero1*0) + numero1;
					}else{
						if((numero1 >= 1300) && (numero1 < 2300)){
							resultado1 = numero1*0.10;
						}else if(numero1 >= 2300){
							resultado1 = numero1*0.15;
						}
					}
					printf("\n Nome: %s", nome);
					printf("\n Valor da aliquota: %.2f \n", resultado1);
					cont += 1;
				}
			break;
			case 9:
				cont = 1;
				mediaIdade = 0;
				contexecelente = 0;
				contregular = 0;
				contbom = 0;
				while(cont <= 20) {
					printf("\n -->Opiniao da Pessoa %d \n Execelente[1] - Regular[2] - Bom[3] \n (Comente de acordo com a numeracao) \n:_ ", cont);
					scanf("%d", &numeroInt1);
					printf("\n [Pessoa %d] Idade: ", cont);
					scanf("%d", &idade);

					if(numeroInt1 == 1) {
						contexecelente += 1;
						mediaIdade += idade;
						mediaIdade = mediaIdade/contexecelente;
					}else{
						if(numeroInt1 == 2) {
							contregular++;
						}else if(numeroInt1 == 3) {
							contbom += 1;
						}
					}
					cont += 1;
				}
				percentagem = contbom/cont;
				printf("\n Media da idade: %.2f", mediaIdade);
				printf("\n Regulares: %d", contregular);
				printf("\n Percentagem de Bom: %.2f", percentagem);
			break;
			case 10:
				cont = 1;
				cont1 = 1;
				mediaPesoTotal = 0;
				mediaIdadeTotal = 0;

				for(cont1 = 1; cont1 <= 30; cont1++) {
					mediaPeso = 0;
					mediaIdade = 0;
					maisPesado = 0;
					maisJovem = 0;
					for(cont = 1; cont <= 12; cont++){
						printf("\n [Jogador %d] Idade: ", cont);
						scanf("%d", &idade);
						printf("\n [Jogador %d] Peso: ", cont);
						scanf("%d", &numeroInt1);

						if(cont == 1 || maisJovem > idade){
							maisJovem = idade;
							mediaIdade += idade;
						}
						
						if(maisPesado < numeroInt1){
							maisPesado = numeroInt1;
							mediaPeso += maisPesado;
						}
					}
					mediaIdadeTotal += mediaIdade;
					mediaPesoTotal += mediaPeso;

					resultado1 = mediaIdade/cont;
					resultado2 = mediaPeso/cont;

					printf("\n Media da Idade do time: %.2f \n", resultado1);
					printf("\n Media do peso do time: %.2f \n", resultado2);
					printf("\n Jogador mais novo: %d \n", maisJovem);
					printf("\n Jogador Pericles: %d \n", maisPesado);
				}
			break;
			case 11:
				cont = 0;
				do{
					printf("Digite um numero: \n");
					scanf("%d", &numeroInt1);
					if((numeroInt1 >= 100) && (numeroInt1 <= 200)) {
						cont++;
					}
				}while(numeroInt1 != 0);
				printf("Quantidade de numeros entre 100 e 200: %d \n", cont);
			break;
			case 12:
				cont = 0;
				numero1 = 5000000;
				numero2 = 7000000;

				while(numero1 < numero2) {
					numero1 += numero1 * 0.03;
					numero2 += numero2 * 0.02;
					cont++;
				}

				printf("\n Total de anos: %d \n", cont);
			break;
			case 13:
				mediaResidencial = 0;
				mediaComercial = 0;
				qtdResidencial = 0;
				qtdComercial = 0;

				printf("\n Digite o numero do consumidor(Aperte 0 para sair): ");
				scanf("%d", &numeroInt1);
				while(numeroInt1 != 0){
					if (numeroInt1 == 0){
						break;
					}

					printf("\n Informe a quantidade de kWh consumidos: ");
					scanf("%d", &w);
					printf(
						"\n Tipo (codigo) do consumidor"
						"\n 1 - Residencial"
						"\n 2 - Comercial"
						"\n 3 - Industrial"
					);
					printf("\n Escolha de acordo com a numeracao: ");
					scanf("%d", &tipo);

					if(tipo == 1) {
						resultado1 = w*0.3;
						numero1 += w;
					}else{
						if(tipo == 2) {
							resultado1 = w*0.5;
							numero2 += w;
						}else if(tipo == 3) {
							resultado1 = w*0.7;
							numero3 += w;
						}
					}
					if(tipo == 1) {qtdResidencial++;}
					if(tipo == 2) {qtdComercial++;}

					printf("\n Total do Custo: %f \n", resultado1);

					printf("\n Digite o numero de consumidores(Aperte 0 para sair): ");
					scanf("%d", &numeroInt1);
				}

				mediaComercial = numero1/qtdComercial;
				mediaResidencial = numero2/qtdResidencial;

				printf("\n Total de consumo \n --> residencial: %f \n", numero1);
				printf("\n --> comercial: %f \n", numero2);
				printf("\n --> industrial: %f \n", numero3);
				printf("\n Media de consumo \n --> residencial: %f \n", mediaResidencial);
				printf("\n --> comercial: %f \n", mediaComercial);
			break;
			case 14:
				cont = 1;
				int fatorial;
				do {
					fatorial = 1;
					printf("\n Digite um numero(Aperte 0 para sair): ");
					scanf("%d", &numeroInt1);
					if(numeroInt1 > 1) {
						// while(numeroInt1 > 0){
						// 	cont += 1;
						// }
						for(cont = numeroInt1; cont > 0; cont--) {
							fatorial = fatorial * cont;
						}
						printf("\n Fatorial do numero %d eh: %d \n", numeroInt1, fatorial);
					}else if(numeroInt1 == 0) {
						break;
					}
				} while(numeroInt1 != 0);
			break;
			case 15:
				menorI = 0;
				maiorI = 0;
				do {
					printf("Idade(Aperte 0 para sair): ");
					scanf("%d", &idade);
					if (idade >= 1) {
						if (idade < 21) {
							menorI += 1;
						}else if (idade > 50){
							maiorI += 1;
						}
					}else if(idade == 0) {
						break;
					}
				} while (idade != 0);

				printf("\n Pessoas menores de 21 anos: %d \n", menorI);
				printf("\n Pessoas maiores de 50 anos: %d \n", maiorI);
			break;
			case 16:
				printf("\n Informe primeiro numero: "); 
				scanf("%d", &numeroInt1); 
				printf("\n Informe segundo numero: ");
				scanf("%d", &numeroInt2);

				if(numeroInt1 < 0) {
					printf("\n Dividendo invalido \n"); 
				}else if (numeroInt2 < 0){
					printf("\n Divisor invalido \n");
				}else if (numeroInt1 < numeroInt2){
					printf("\n Dividendo tem que ser maior que o divisor \n"); 
				}else{
					restoD = numeroInt1;
					while (restoD >= numeroInt2) { 
						restoD = restoD - numeroInt2;
					}
					printf("\n Resto da divisao: %d \n", restoD);
				}
			break;
			case 17:
				printf("\n Digite o numero do pedido(Aperte 0 para sair): "); 
				scanf("%d", &numeroInt1);
				
				while(numeroInt1 != 0) {
					if(numeroInt1 == 0) {
						break;
					}
					
					printf("\n Data do pedido \n");
					printf(" Dia: ");scanf("%d", &dia); 
					printf(" Mes: ");scanf("%d", &mes); 
					printf(" Ano: ");scanf("%d", &ano);
					 
					printf("\n Digite o preco: "); 
					scanf("%f", &numero1);
					printf("\n Digite a quantidade: "); 
					scanf("%d", &quantidade);

					resultado1 = numero1 * quantidade;
					printf("\n Total a pagar: %.2f \n", resultado1);

					printf("\n Digite o numero do pedido(Aperte 0 para sair): "); 
					scanf("%d", &numeroInt1);
				}
			break;
			case 18:
				do {
					printf("\n Informe o numero da conta(Aperte 0 para sair): "); 
					scanf("%d", &numeroInt1);
					if(numeroInt1 == 0) {
						break;
					}
					printf("\n Informe o nome do cliente(Aperte 0 para sair): "); 
					fflush(stdin);
					fgets(nome, 40, stdin);
					if(nome[0] == '0') {
						break;
					}
					printf("\n Informe a quantidade de dias(Aperte 0 para sair): "); 
					scanf("%d", &dia);
					if(dia == 0) {
						break;
					}

					numeroInt3 = (dia * 30);

					if((dia > 1) && (dia < 10)) {
						resultado1 = numeroInt3 + (dia * 15);
						printf("Total a pagar: %.2f\n", resultado1);
					}else if(dia >= 10){
						resultado1 = numeroInt3 + (dia * 8);
						printf("Total a pagar: %.2f\n", resultado1);
					}else if(dia < 1){
						printf("\n Informacao invalida. \n");
					}
				} while(numeroInt1 != 0);
			break;
			case 19:
				cont = 0;
				soma = 0;
				resultadoInt1 = 0;

				do {
					if(cont == 0) {
						printf("\n Informe a quantidade de alunos na turma: "); 
						scanf("%d", &numeroInt1);
					}else{
						numeroInt3 = cont + 1;
						printf("\n [Aluno %d] Nota: ", numeroInt3 - 1);
						scanf("%f", &numero1);
						if(numero1 >= 7) {
							resultadoInt1 += 1;
						}
						soma += numero1;
					}
					cont += 1;
				} while(cont <= numeroInt1);

				mediaf = soma / numeroInt1;
				resultado1 = ((numeroInt1 - resultadoInt1) / numeroInt1) * 100;

				printf("\n Media da turma: %.2f \n", mediaf); 
				printf("\n Numero de aprovados: %d \n", resultadoInt1); 
				printf("\n Percentual de Reprovados: %.2f \n", resultado1);
			break;
			case 20:
				flamengo = 0;
				fluminense = 0;
				vasco = 0;
				botafogo = 0; 
				outros = 0;
				torcOutros = 0;
				torcFluminense = 0;
				somaf = 0;

				do{
					printf(
						"\n Qual o seu time de coracao (interrogacao)"
						"\n [1] - Fluminense"
						"\n [2] - Botafogo"
						"\n [3] - Flamengo"
						"\n [4] - Vasco"
						"\n [5] - Outros"
					);
					printf("\n Escolha de acordo com a numeracao(Aperte 0 para sair):\n _ ");
					scanf("%d", &cont);
					if(cont == 0) {
						break;
					}

					printf("\n Qual o seu salario: ");
					scanf("%f", &numero1);

					if(cont == 1) {
						fluminense += 1;
					}else if(cont == 2) {
						botafogo += 1;
						somaf += numero1;
					}else if(cont == 3) {
						flamengo += 1; // 0x5 Del Valle
					}else if(cont == 4) {
						vasco += 1;
					}else if(cont == 5) {
						outros += 1;
					}

					printf(
						"\n Onde voce mora (interrogacao) - De acordo com a numeracao"
						"\n [1] - Rio de Janeiro"
						"\n [2] - Niteroi"
						"\n [3] - Outros"
					);
					printf("\n Escolha: "); 
					scanf("%d", &numeroInt1);

					if(cont == 5 && numeroInt1 == 1) {
						torcOutros += 1;
					}else if(cont == 1 && numeroInt1 == 2) {
						torcFluminense += 1;
					}

				} while(cont != 0);

				mediaf = somaf / botafogo;

				printf("\n Torcedores \n --> Fluminense: %d \n", fluminense); 
				printf("\n --> Botafogo:  %d \n", botafogo); 
				printf("\n --> Flamengo:  %d \n", flamengo); 
				printf("\n --> Vasco:     %d \n", vasco); 
				printf("\n Torcedores de outros clubes: %d \n", outros);
				printf("\n Torcedores de Niteroi que torcem para o Fluminense:\n --> %d \n", torcFluminense);
				printf("\n Media de salario dos torcedores do Botafogo:\n --> R$ %.2f \n", mediaf); 
				printf("\n Torcedores do RJ que torcem para outros clubes:\n --> %d \n", torcOutros); 
			break;
			case 21:
				resultado1 = 0;
				pMaior = 0;
				ouDespesas = 0;

				do {
					printf("\n Informe a renda pessoal(Aperte 0 para sair):\n _ "); 
					scanf("%f", &numero1);
					if(numero1 == 0) {
						break;
					}
					printf("\n Informe a renda familiar: "); 
					scanf("%f", &numero2);
					printf("\n Informe o gasto com alimentacao: "); 
					scanf("%f", &numero3);
					printf("\n Informe o gasto com outras despesas: "); 
					scanf("%f", &numero4);

					if(numero4 > 200) { ouDespesas += 1;}
					if(numero1 > numero2) { pMaior += 1;}

					percAlimtP = (numero3 / numero1) * 100; 
					percAlimtF = (numero3 / numero2) * 100; 
					percOuDespesasP = (numero4 / numero1) * 100; 
					percOuDespesasF = (numero4 / numero2) * 100;

					printf("\n Porcentagem por Alimentacao \n --> Renda Pessoal: %.2f \n", percAlimtP); 
					printf("\n --> Renda Familiar: %.2f \n", percAlimtF); 
					printf("\n Porcentagem por Outras Despesas \n --> Renda Pessoal: %.2f \n", percOuDespesasP); 
					printf("\n --> Renda Familiar: %.2f \n", percOuDespesasF);
					
					resultado1 += 1;
				} while(numero1 != 0);

				resultado2 = (ouDespesas / resultado1) * 100;

				printf("\n [Outras Despesas] Percentual de gastos acima de 200:\n --> %.2f \n", resultado2); 
				printf("\n [Numero de pessoas] Renda -> Pessoal > Familiar:\n --> %d \n", pMaior);
			break;
			case 22:
				cont = 1;
				multMaior = 0;
				resultado1 = 0;

				printf("\n Informe o numero da carteira de motorista(Aperte 0 para sair):\n _ "); 
				scanf("%f", &numero1); 
				if(numero1 == 0){
					break;
				}else{
					while(numero1 != 0) {
						if(numero1 == 0) {
							break;
						}else{
							if((numero1 > 1) && (numero1 < 4327)){
								printf("\n Informe o numero de multas: "); 
								scanf("%d", &numeroInt1);
								if (numeroInt1 > multMaior) { 
									multMaior = numeroInt1; 
									carMaior = numero1;
								}

								while(cont <= numeroInt1) {
									printf("\n [Multa %d] Valor: ", cont);
									scanf("%f", &numero2);

									resultado1 += numero2; 
									numero3 += numero2;
									cont += 1;
								}
								printf("\n Divida do motorista: %.2f \n", numero3); divida = 0; cont = 1;
							}else{
								printf("\n Numero da carteira de motorista eh entre 1 a 4327:\n _ "); 
								scanf("%f", &numero1); if(numero1 == 0){break;}
							}
						}
						printf("\n Informe o numero da carteira de motorista: "); 
						scanf("%f", &numero1);
					}
					if(numero1 > 0){
						printf("\n Total de recursos arrecadados pelo DETRAN: R$ %.2f", resultado1); 
						printf("\n Motorista com maior numero de multas: %d", carMaior);
					}
				}
			break;
			case 23:
				cont = 0;
				maisAlta = 0; 
				maisPesadof = 0; 
				contIdade = 0;
				altura = 0;

				do {
					printf("\n Digite o nome do atleta(Aperte @ para sair):\n _ "); 
					fflush(stdin);
					fgets(nome, 40, stdin);

					// if (strcmp(nome, '@') == 0){break;} //Erro, termina o programa.
					if(nome[0] == '@') {
						break;
					}

					printf("\n Digite a idade do atleta: "); 
					scanf("%d", &idade);
					printf("\n Digite o peso do atleta: "); 
					scanf("%f", &peso);
					printf("\n Digite a altura do atleta(cm): "); 
					scanf("%f", &numero1);
					printf("\n Digite a letra inicial do sexo do atleta \n [Feminino(F) - Masculino(M)]:_ "); 
					fflush(stdin);
					fgets(sexo, 2, stdin);

					altura = (numero1 / 100);

					if(((sexo[0] == 'F') || (sexo[0] == 'f')) && (altura > maisAlta)) { 
						maisAlta = altura; 
					}else if(((sexo[0] == 'M') || (sexo[0] == 'm')) && (peso > maisPesadof)) { 
						maisPesadof = peso;
					}

					contIdade += idade; 
					cont += 1;
				} while((nome[0]) != (nome[0] == '@'));

				printf("\n Media de idade dos atletas: %.2f \n", (contIdade / cont));
				printf("\n A atleta mais alta: %.2f \n", maisAlta); 
				printf("\n O atleta mais pesado: %.2f \n", maisPesadof);
			break;
			case 24:
				cont = 0;

				do {
					printf("\n Informe a velocidade(Informar um valor negativo para sair):\n _ "); 
					scanf("%f", &numero1); if(numero1 < 0) { break;}
					printf("\n Informe o tempo: "); 
					scanf("%f", &tmp);
					distancia = (numero1 * tmp); consumo = (distancia / 10); 
					printf("\n Distancia percorrida: %.2f \n", distancia); 
					printf("\n Total gasto no trecho: R$ %.2f \n", consumo);

					cont += consumo;
				} while(numero1 >= 0);

				printf("\n Litros consumidos: %.2f ", cont);
			break;
			case 25:
				cont = 0;
				resultado1 = 0;

				do {
					printf("\n Informe o CIC(Aperte 0 para sair):\n _ "); 
					scanf("%d", &numeroInt1); if(numeroInt1 == 0) { break;}
					printf("\n Informe o numero de dependentes: "); 
					scanf("%d", &numeroInt2);
					printf("\n Informe a renda: "); 
					scanf("%f", &renda);

					renda = (renda - (numeroInt2 * 600));

					if(renda <= 1000) { 
						printf("\n Isento de imposto \n");
					}else if((renda >= 1001) && (renda <= 5000)) {
						resultado1 = renda * 0.15;
					}else if(renda > 5000) {
						resultado1 = renda * 0.25;
					}
					printf("Resultado do CIC: %d \n", numeroInt1); 
					printf("Resultado do Imposto: %.2f \n", resultado1); 

					cont += resultado1;
				} while(numeroInt1 != 0);

				printf("\n Quantia arrecada pela Receita federal: R$ %.2f \n", cont);
			break;
			case 26:
				cont = 0;
				canal4 = 0; 
				canal5 = 0;
				canal7 = 0;
				canal12 = 0;

				do { 
					printf(
						"\n Canais disponiveis da TV"
						"\n 1 - Canal [4]"
						"\n 2 - Canal [5]"
						"\n 3 - Canal [7]"
						"\n 4 - Canal [12]"
						"(Aperte 0 para sair)"
					); 
					printf("\n Escolha: "); 
					scanf("%d", &numeroInt1); if(numeroInt1 == 0) { break;}
					if((numeroInt1 != 1) || (numeroInt1 != 2) || (numeroInt1 != 3) || (numeroInt1 != 4)) {
						printf("\n Canal nao existe \n");
					}else{
						if(numeroInt1 == 1){
							canal4 += 1;
						}else if(numeroInt1 == 2){
							canal5 += 1;
						}else if(numeroInt1 == 3){
							canal7++;
						}else if(numeroInt1 == 4){
							canal12++;
						}
					}

					cont++;
				} while(numeroInt1 != 0);

				percC4 = ((canal4 / cont) * 100); 
				percC5 = ((canal5 / cont) * 100); 
				percC7 = ((canal7 / cont) * 100); 
				percC12 = ((canal12 / cont) * 100);

				printf("\n Pessoas entrevistadas: %d", cont); 
				printf("\n Percentual de pessoas que assistem \n --> canal 4: %.2f", percC4); 
				printf("\n --> canal 5: %.2f", percC5); 
				printf("\n --> canal 7: %.2f", percC7); 
				printf("\n --> canal 12: %.2f", percC12);
			break;
			case 27:
				maiorCR = 0;
				numero2 = 0;
				
				do {
					printf(
						"\n Informe o numero da matricula"
						"\n (Digite um numero < 1 ou > 5000 para sair):"
						"\n _ "
					); 
					scanf("%d", &numeroInt1);
					if ((numeroInt1 < 1) || (numeroInt1 > 5000)){
						break;
					}else{
						printf("\n Informe a quantidade de disciplinas: "); 
						scanf("%d", &numeroInt2);

						while(cont <= numeroInt2) {
							printf("\n [Disciplina %d] Nota: ", cont); 
							scanf("%f", &numero1);
							numero2 += numero1; 
							cont += 1;
						}
						resultado1 = (numero2 / numeroInt2); 
						printf("\n Matricula do Aluno: %d \n", numeroInt1);
						printf("\n Numero de disciplinas: %d \n", numeroInt2); 
						printf("\n CR do Aluno: %.2f \n", resultado1);

						if((numeroInt2 >= 5) && (resultado1 > maiorCR)) { 
							maiorCR = resultado1;
						}
					} cont = 1;
				} while((numeroInt1 >= 1) <= 5000);
				
				printf("\n Maior CR entre os alunos eh: %.2f \n", maiorCR);
			break;
			case 28:
				cont = 0;
				numeroInt1 = 0;
				maior50 = 0;
				somaAltura = 0;
				mediaAltura = 0;
				menor40 = 0;
				percP40 = 0;
				altura = 0;

				do {
					printf("\n Informe a idade(Aperte 0 para sair): "); 
					scanf("%d", &idade); if(idade == 0) { break;}
					printf("\n Informe a altura(cm): "); 
					scanf("%f", &numero1); 
					printf("\n Informe o peso: "); 
					scanf("%f", &peso);

					altura = (numero1 / 100);

					if((idade >= 10) && (idade <= 20)) { 
						somaAltura += altura; 
						cont++;
					}else if(idade > 50){
						maior50 += 1;
					}	

					if(peso < 40) {
						menor40 += 1;
					}

					numeroInt1 += 1;
				} while(idade > 0); if(cont == 0) { cont=1;}
				mediaAltura = (somaAltura / cont); 
				percP40 = (menor40 / numeroInt1);

				printf("\n Porcentagem de pesos menores que 40 quilos: %.2f \n", percP40);
				printf("\n Media da altura entre 10 e 20 anos: %.2f \n", mediaAltura); 
				printf("\n Pessoas maiores de 50 anos: %d \n", maior50); 
			break;
			case 29:
				contLimpeza = 0;
				resultado1 = 0;
				contAlimt = 0; 
				contHig = 0;

				do {
					printf("\n Informe o valor da mercadoria(Aperte 0 para sair):\n _ "); 
					scanf("%f", &numero1); if(numero1 == 0) { break;}
					printf(
						"\n codigo[L] - Limpeza"
						"\n codigo[A] - Alimentacao"
						"\n codigo[H] - Higiene"
					);
					printf("\n Codigo: "); 
					fflush(stdin);
					scanf("%s", &numCodigo);

					if((numCodigo[0] == 'L') || (numCodigo[0] == 'l')) {
						contLimpeza += numero1;
					}else if((numCodigo[0] == 'A') || (numCodigo[0] == 'a')) {
						contAlimt += numero1;
					}else if((numCodigo[0] == 'H') || (numCodigo[0] == 'h')) {
						contHig += numero1; 
					}
					resultado1 += numero1;
				} while(numero1 > 0);

				printf("\n Total vendido: R$ %.2f \n", resultado1);
				printf("\n Total vendido por categoria \n --> Limpeza: R$ %.2f \n", contLimpeza); 
				printf("\n --> Alimentacao: R$ %.2f \n", contAlimt); 
				printf("\n --> Higiene: R$ %.2f \n", contHig);
			break;
			case 30:
				casado = 0;
				solteiro = 0; 
				viuvo = 0; 
				separado = 0;
				numeroInt1 = 0;
				iddViuvo = 0;

				do {
					printf("\n Informe a idade(Digite um valor menor que zero para sair):\n _ "); 
					scanf("%d", &idade); if(idade < 0) { break;}
					printf(
						"\n EC[C] - Casado"
						"\n EC[S] - Solteiro"
						"\n EC[V] - Viuvo"
						"\n EC[D] - Separado"
					);
					printf("\n Estado civil: ");
					fflush(stdin);
					scanf("%s", &numCodigo);

					if((numCodigo[0] == 'C') || (numCodigo[0] == 'c')) {
						casado++;
					}else{
						if((numCodigo[0] == 'S') || (numCodigo[0] == 's')) {
						solteiro++;
						}else if((numCodigo[0] == 'V') || (numCodigo[0] == 'v')) { 
							viuvo += 1;
							iddViuvo += idade;
						}else if((numCodigo[0] == 'D') || (numCodigo[0] == 'd')){
							separado += 1;
						}
					}
					numeroInt1++;
				} while(idade >= 0);
				mediaIdade = (iddViuvo / viuvo); 
				percSeparado = (separado / numeroInt1);

				printf("\n Quantidade de: \n --> Casados: %d", casado);
				printf("\n --> Solteiros: %d", solteiro); 
				printf("\n Media de idade dos viuvos: %.2f", mediaIdade); 
				printf("\n Porcentagem de separados: %.2f", percSeparado);
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
