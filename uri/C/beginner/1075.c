#include <stdio.h>

int main()
{

	int N, num;

	scanf("%d", &N);

	for(num = 1; num <= 10000; num++){
		if(num % N == 2){
			printf("%d\n", num);
		}
	}

	return 0;
}
