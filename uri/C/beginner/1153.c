#include <stdio.h>

int main(){

	int N, fatorial;
	int i;

	scanf("%d", &N);

	for(fatorial = 1; N > 1 ; N--){
		fatorial *= N;
	}

	printf("%d\n", fatorial);

	return 0;
}
