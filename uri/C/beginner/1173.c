#include <stdio.h>

int main()
{
	
	int V, i, dobro = 0, antigo;

	scanf("%d", &V);

	antigo = V;

	printf("N[0] = %d\n", V);

	for(i = 1; i < 10; i++){
		dobro = antigo * 2;
		antigo = dobro;
		printf("N[%d] = %d\n", i, dobro);
	}

	return 0;
}
