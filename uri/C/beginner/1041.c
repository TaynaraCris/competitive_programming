#include <stdio.h>

int main()
{

	double x, y, Q1, Q2, Q3, Q4, eixoX, eixoY;

	scanf("%lf %lf", &x, &y);

	//quadrantes:

	if(x > 0 && y > 0){
		printf("Q1\n");
	}

	if(x > 0 && y < 0){
		printf("Q4\n");
	}

	if(x < 0 && y < 0){
		printf("Q3\n");
	}

	if(x < 0 && y > 0){
		printf("Q2\n");
	}

	//origem:

	if(x == 0 && y == 0){
		printf("Origem\n");
	}

	//eixos:

	if(x == 0 && y != 0){
		printf("Eixo Y\n");
	}

	if(x != 0 && y == 0){
		printf("Eixo X\n");
	}

	return 0;
}
