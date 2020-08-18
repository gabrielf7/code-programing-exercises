#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int a = 0, b = 1, c = 0;
	printf("%d\n", a);
	printf("%d\n", b);
	while (c < 500){
	    c = a + b;
	    printf("%d\n", c);
	    a = b;
	    b = c;
    }
system("PAUSE");
return(0);
}
