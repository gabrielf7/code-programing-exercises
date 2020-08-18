#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	
	float n1, n2, media;
	
	printf("Digite a sua primeira nota: \n");
	scanf("%f", &n1);
    printf("Digite a sua segunda nota: \n");
    scanf("%f", &n2);
    
media = (n1+n2)/2;
	
	if((media >= 7)&&(media <= 9.9)){
	      printf("Aprovado \n");
	}else{
	    if(media < 7){
	      printf("Reprovado \n");
	    }else{
	        if(media == 10){
	            printf("Aprovado com Distincao \n");
            }
	    }   
    }
system("PAUSE");
return(0);
}
