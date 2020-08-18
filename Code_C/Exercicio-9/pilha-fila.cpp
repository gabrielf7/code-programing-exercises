#include <stdio.h>
#include <stdlib.h>
int main(){
	/*int op = 10;
	while(op != 0){
		printf("\n Opcoes:");
		printf("\n [0]Sair");
		printf("\n [1] Inserir");
		printf("\n [2] Remover");
		printf("\n [3] Listar \n:_");
		scanf("%d", &op);
		switch(op){
			case 1: //Inserir
			     break;
			case 2: //Remover
			     break;
		    case 3: //Listar
			     break;
		    case 4: //Sair
			     break;
		    default: //Default
		         printf("\nOpcao Invalida\n");
		         break;
	    }
    }*/
    int op = 10, valor = 0, contador = 0, inicio = 0, fim = 0, tamanho = 0;
    int pilha[6];
	while(op != 0){
		printf("\n Opcoes: \n [0]Sair \n [1] Inserir \n [2] Remover \n [3] Listar \n:_");
		scanf("%d", &op);
		switch(op){
			case 1: //Inserir
			    if(tamanho == 6)
			       printf("\n ---Pilha lotada--- \n");
			    else{
			       printf("Digite o valor a ser inserido: ");
			       scanf("%d", &valor);
			       pilha[inicio] = valor;
			       tamanho++;
			       inicio++;
				 }
			     break;
			case 2: //Remover
			    if (tamanho == 0){
			       printf("Lista vazia.");
			    }else{
			       inicio--;
			       pilha[inicio] = 0;
			       tamanho--;
			    }
			    break;
		    case 3: //Listar
		        contador = inicio;
		        while(contador > 0){
			        printf("\n [%d]", pilha[contador-1]);
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
