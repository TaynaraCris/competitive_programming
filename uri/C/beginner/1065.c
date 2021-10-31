#include <stdio.h>

int main()
{

	int x, y, z, t, w, par=0;

	scanf("%d %d %d %d %d", &x, &y, &z, &t, &w);

	if(x % 2 == 0){
			par += 1;
	}

	if(y % 2 == 0){
			par += 1;
	}

	if(z % 2 == 0){
			par += 1;
	}

	if(t % 2 == 0){
			par += 1;
	}

	if(w % 2 == 0){
			par += 1;
	}

	printf("%d valores pares\n", par);

	return 0;
}
