#include <stdio.h>

int main()
{

	int N, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez ;

	scanf("%d", &N);

	if(2 < N && N < 1000){
		um = 1 * N;
		dois = 2 * N;
		tres = 3 * N;
		quatro = 4 * N;
		cinco = 5 * N;
		seis = 6 * N;
		sete = 7 * N;
		oito = 8 * N;
		nove = 9 * N;
		dez = 10 * N;

		printf("1 x %d = %d\n", N, um);
		printf("2 x %d = %d\n", N, dois);
		printf("3 x %d = %d\n", N, tres);
		printf("4 x %d = %d\n", N, quatro);
		printf("5 x %d = %d\n", N, cinco);
		printf("6 x %d = %d\n", N, seis);
		printf("7 x %d = %d\n", N, sete);
		printf("8 x %d = %d\n", N, oito);
		printf("9 x %d = %d\n", N, nove);
		printf("10 x %d = %d\n", N, dez);
}
	return 0;
}
