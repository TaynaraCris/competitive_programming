#include <stdio.h>

int main()
{

	double salario, nsalario, Reajuste;

	scanf("%lf", &salario);

	if(0 < salario && salario <= 400){
		nsalario = salario * 1.15;
		Reajuste = salario * 0.15;
		printf("Novo salario: %.2lf\n", nsalario);
		printf("Reajuste ganho: %.2lf\n", Reajuste);
		printf("Em percentual: 15 %%\n");
	}

	if(400 < salario && salario <= 800){
		nsalario = salario * 1.12;
		Reajuste = salario * 0.12;
		printf("Novo salario: %.2lf\n", nsalario);
		printf("Reajuste ganho: %.2lf\n", Reajuste);
		printf("Em percentual: 12 %%\n");
	}

	if(800 < salario && salario <= 1200){
		nsalario = salario * 1.10;
		Reajuste = salario * 0.10;
		printf("Novo salario: %.2lf\n", nsalario);
		printf("Reajuste ganho: %.2lf\n", Reajuste);
		printf("Em percentual: 10 %%\n");
	}

	if(1200 < salario && salario <= 2000){
		nsalario = salario * 1.07;
		Reajuste = salario * 0.07;
		printf("Novo salario: %.2lf\n", nsalario);
		printf("Reajuste ganho: %.2lf\n", Reajuste);
		printf("Em percentual: 7 %%\n");
	}

	if(salario > 2000){
		nsalario = salario * 1.04;
		Reajuste = salario * 0.04;
		printf("Novo salario: %.2lf\n", nsalario);
		printf("Reajuste ganho: %.2lf\n", Reajuste);
		printf("Em percentual: 4 %%\n");
	}

	return 0;
}
