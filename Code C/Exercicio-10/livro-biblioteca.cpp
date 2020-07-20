#include <stdio.h>
#include <stdlib.h>
int main(){
	int choice = 1, opcao = 4, remover = 0, inicio = 0, fim = 0;
	int tamanho = 0, contador = 0, contador1 = 0;
	char escada[7][200], livro[20];
	    printf("--------------------Biblioteca - Santa Money-------------------- \n");
		while(choice != 0){
			printf("Use o programa da seguinte forma/: \n ¬¬>Inserir[2]¬¬>Remover[1]¬¬>Listar[3]¬¬>Sair[0] \n");
		    printf("Escolha uma opcao: ");
		    scanf("%d", &opcao);
		    while ((opcao > 3) or (opcao < 0)){
		    	printf("ERRO, informe apenas a opcao correta. \n");
		    	printf("Escolha a opcao correta: ");
		    	scanf("%d", &opcao);
	    	}
		    switch(opcao){
			    case 1: //Remover
			        if (tamanho == 0){
				       printf("Está em falta. \n");
				    }else{
				    	tamanho--;
				    	escada[contador-1];
				    	inicio--;
					}
				case 2: //Inserir
				    if(tamanho == 8){
			           printf("\n ---Pilha lotada--- \n");
			        }else{
					    printf("Digite o livro: ");
				        gets(livro);
				        escada[inicio][200] = livro[20];
						tamanho++;
						inicio++;
				    }
					break; 
				case 3: //Listar
					contador = inicio;
			        while(contador > 0){
				        printf("\n Livro: [%d]", escada[contador-1]);
				        contador--;
					}
					break;
				case 0: //Sair
			        printf("\n" 
			                "\n          ------- \n"
					        " ~~> Hasta vista baby"
							"\n          ------- ""\n");
				    break;
			    default: //Default
			        printf("\n Opcao Invalida");
			        break;
		    }
	    }
	 system("PAUSE");
	 return(0);
}
