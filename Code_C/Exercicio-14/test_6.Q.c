// Pegue o mesmo algoritmo da questão de 65000 elementos e com o mesmo algoritmo, 
// implemente a função de salvar todos os elementos, índices de vetor e a posição 
// do ponteiro de cada elemento em um arquivo "questaodoida.txt" dentro do código 
// e envie novamente como se fosse outra questão. Envie um arquivo compactado em 
// formato .zip com o arquivo .c. *

//Por João Gabriel.
#include <stdio.h>
#include <stdlib.h>

void pausar() {
  printf("\n Pressione alguma tecla para continuar...");
  getch();
}

int main(){
	FILE *pTestFile;
	int cont, num[65000], *contcalc; cont=1;

	pTestFile = fopen("questaodoida.txt", "w");

	if(pTestFile==NULL){
		printf("Erro ao salvar arquivo.");
		exit(1);
	}else{
		while(cont<=65000) {
			if(cont==1){contcalc = &num[cont]; *contcalc = 0;} *contcalc += 1;
			printf("\n Valor do Vetor %d, Indice %d, Ponteiro %p. \n", 
				*contcalc, cont, &num[cont]
			);
			fprintf(pTestFile, 
				"\n Valor do Vetor %d, Indices %d, Ponteiro %p. \n", 
				*contcalc, cont, &num[cont]
			);
			cont++;
		}
		fclose(pTestFile); printf("\n Concluido o processo de gravacao... \n");
	}
	
	pausar();
	return(0);
}
