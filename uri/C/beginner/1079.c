#include <stdio.h>

int main(){

	int N;
	scanf ("%d", &N);

	float num1, num2, num3;
	float media = 0;

	int i;

	for(i = 0; i < N; i++){
		scanf ("%f %f %f", &num1, &num2, &num3);
		media = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10;

		if(i != N){
			printf("%.1f\n", media);
		}
	}

	return 0;
}
