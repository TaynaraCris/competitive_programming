#include <stdio.h>

int main()
{

	int X, Y, i, maior, menor, num=0;

	scanf("%d %d", &X, &Y);

	if(X > Y){
		maior = X;
		menor = Y;
	}
	else{
		menor = X;
		maior = Y;
	}

	for(i = (menor + 1); i < maior; i++){
		if(i % 2 != 0){
			num += i;
		}
	}

	printf("%d\n", num);

	return 0;
}
