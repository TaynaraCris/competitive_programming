#include <stdio.h>

int main()

{

	int X = 1, i;

	scanf("%d", &X);

	if(1 <= X && X <= 1000){
	for(i = 1; i <= X; i += 2)
	{
		printf("%d\n", i);
	}}

	return 0;
}
