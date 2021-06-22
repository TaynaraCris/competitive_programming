#include <stdio.h>

int main(){

	int N, M;
	int area, num_domino;

	scanf("%d %d", &N , &M);

	area = N * M;
	num_domino = area / 2;

	printf("%d\n", num_domino);

	return 0;
}
