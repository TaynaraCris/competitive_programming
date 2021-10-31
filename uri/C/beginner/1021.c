#include <stdio.h>

int main ()
{

	double N, resto;
	int i, nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0;
	int moeda1=0, moeda050=0, moeda025=0, moeda010=0, moeda005=0, moeda001=0;	

	scanf("%lf", &N);

	i = N * 100;
	
	if(i >= 10000){
		nota100 = i/10000;
		i = i % 10000;

	}

	if(i >= 5000){
		nota50 = i/5000;
		i = i % 5000;
	}

	if(i >= 2000){
		nota20 = i/2000;
		i = i % 2000;
	}

	if(i >= 1000){
		nota10 = i/1000;
		i = i % 1000;
	}

	if(i >= 500){
		nota5 = i/500;
		i = i % 500;
	}

	if(i >= 200){
		nota2 = i/200;
		i = i % 200;
	}

	if(i >= 100){
		moeda1 = i/100;
		i = i % 100;

	}

	if(i >= 50){
		moeda050 = i/50;
		i = i % 50;

	}


	if(i >= 25){
		moeda025 = i/25;
		i = i % 25;

	}


	if(i >= 10){
		moeda010 = i/10;
		i = i % 10;

	}


	if(i >= 5){
		moeda005 = i/5;
		i = i % 5;

	}


	if(i >= 1){
		moeda001 = i;

	}

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", nota100);
	printf("%d nota(s) de R$ 50.00\n", nota50);
	printf("%d nota(s) de R$ 20.00\n", nota20);
	printf("%d nota(s) de R$ 10.00\n", nota10);
	printf("%d nota(s) de R$ 5.00\n", nota5);
	printf("%d nota(s) de R$ 2.00\n", nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda1);
	printf("%d moeda(s) de R$ 0.50\n", moeda050);
	printf("%d moeda(s) de R$ 0.25\n", moeda025);
	printf("%d moeda(s) de R$ 0.10\n", moeda010);
	printf("%d moeda(s) de R$ 0.05\n", moeda005);
	printf("%d moeda(s) de R$ 0.01\n", moeda001);

	return 0;
}
