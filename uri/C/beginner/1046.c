#include <stdio.h>

int main()
{

	int inicio, fim, total;

	scanf("%d %d", &inicio, &fim);

	if(inicio >= 0 && inicio <= 24){
		if(fim >= 0 && fim <= 24){
			if(inicio >= fim){
				total = (24 + fim) - inicio;
				printf("O JOGO DUROU %d HORA(S)\n", total);
			}
			if(fim > inicio){
				total = fim - inicio;
				printf("O JOGO DUROU %d HORA(S)\n", total);	
			}
		}
	}

	return 0;
}
