#include <stdio.h>

int main () 
{

	int N, i, nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, nota1=0;

	scanf("%d", &N);

	i = N;


	if(N >= 100){
		nota100 = N/100;
		N = N % 100;
	}

	if(N >= 50){
		nota50 = N/50;
		N = N % 50;

	}

	if(N >= 20){
		nota20 = N/20;
		N = N % 20;

	}

	if(N >= 10){
		nota10 = N/10;
		N = N % 10;

	}

	if(N >= 5){
		nota5 = N/5;
		N = N % 5;

	}

	if(N >= 2){
		nota2= N/2;
		N = N % 2;
	}

    if(N == 1){
		nota1 = N;
	}
	printf("%d\n", i);
	printf("%d nota(s) de R$ 100,00\n", nota100);
	printf("%d nota(s) de R$ 50,00\n", nota50);
	printf("%d nota(s) de R$ 20,00\n", nota20);
	printf("%d nota(s) de R$ 10,00\n", nota10);
	printf("%d nota(s) de R$ 5,00\n", nota5);
	printf("%d nota(s) de R$ 2,00\n", nota2);
	printf("%d nota(s) de R$ 1,00\n", nota1);

	return 0;
}
