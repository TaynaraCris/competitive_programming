#include <stdio.h>

int main()
{

	int i, inteiros[100], maior, posicao;

	for(i = 1; i <= 100; i++){
		scanf("%d", &inteiros[i]);
		maior = inteiros[0];
	}
	for(i = 1; i <= 100; i++){
		if(maior < inteiros[i]){
			maior = inteiros[i];
			posicao = i;
		}
	}

	printf("%d\n%d\n", maior, posicao);

	return 0;
}
