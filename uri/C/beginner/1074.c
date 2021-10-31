#include <stdio.h>

int main()
{

	int N, i, A;
	
	scanf("%d", &N);

	for(i = 1; i <= N; i++){
		scanf("%d", &A);
		if(A == 0){
		printf("NULL\n");
		}
		if(A < 0 && A % 2 ==0){
			printf("EVEN NEGATIVE\n");
		}
		if(A > 0 && A % 2 == 0){
			printf("EVEN POSITIVE\n");
		}
		if(A < 0 && A % 2 !=0){
			printf("ODD NEGATIVE\n");
		}
		if(A > 0 && A % 2 != 0){
			printf("ODD POSITIVE\n");
		}

	}

	return 0;
}
