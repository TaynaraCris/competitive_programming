#include <stdio.h>

int main() {

	int X, Y;
	
	do{
		scanf("%d %d", &X, &Y);

		if(Y > 0 && X > 0){
		printf("primeiro\n");
		}
		else if(Y > 0 && X < 0){
			printf("segundo\n");
		}
		else if(Y < 0 && X > 0){
			printf("quarto\n");
		}
		else if(Y < 0 && X < 0){
			printf("terceiro\n");
		}
	}while(X != 0 && Y != 0);

	return 0;
}
