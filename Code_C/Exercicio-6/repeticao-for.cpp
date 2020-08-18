#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nalunos, cont=1;
	float nota, total, media;
	
	printf("Digite o numero de alunos da turma: ");
	scanf("%d", &nalunos);
	
	while(cont <= nalunos){
		printf("Digite a nota %d: ", cont);
		scanf("%f", &nota);
		total = total + nota;
		cont++;		
	}
	
	media = total/nalunos;
	
	printf("A media da turma eh: %f \n", media);
	
	system("PAUSE");
	return(0);
}
