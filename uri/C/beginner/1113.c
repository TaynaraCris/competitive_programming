#include <stdio.h>
#include <string.h>

int main(){

	int X, Y;
	int i;

	do{
		scanf("%d", &X);
		scanf("%d", &Y);

		if(X < Y){
			printf("Crescente\n");
		}
		else if(X > Y){
			printf("Decrescente\n");
		}

	}while(X != Y);

	return 0;
}
