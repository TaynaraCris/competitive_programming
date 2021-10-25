#include <stdio.h>

int main()
{

	int codigo, quantidade;
	double pago;

	scanf("%d %d", &codigo, &quantidade);

	if(codigo == 1){
		pago = 4 * quantidade;
		printf("Total: R$ %.2lf\n", pago);
	}


	if(codigo == 2){
		pago = 4.50 * quantidade;
		printf("Total: R$ %.2lf\n", pago);	
	}


	if(codigo == 3){
		pago = 5 * quantidade;
		printf("Total: R$ %.2lf\n", pago);
	}


	if(codigo == 4){
		pago = 2 * quantidade;
		printf("Total: R$ %.2lf\n", pago);
	}


	if(codigo == 5){
		pago = 1.50 * quantidade;
		printf("Total: R$ %.2lf\n", pago);
	}

	return 0;
}
