#include <stdio.h>

int main ()
{
	int tempo, vm, espaco;
	double combustivel;

	scanf("%d %d", &tempo, &vm);

	espaco = vm * tempo;
	combustivel = espaco/12.0;

	printf("%.3lf\n", combustivel);

	return 0;
}
