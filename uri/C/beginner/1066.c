#include <stdio.h>

int main()
{
	int X, Y, Z, T, Q, i=0, j=0, impar=0, par=0;

	scanf("%d %d %d %d %d", &X, &Y, &Z, &T, &Q);

	if(X > 0){
		i += 1;
	}

	if(X < 0){
		j += 1;
	}
	if(X % 2 == 0){
		par += 1;
	}

	if(X % 2 != 0){
		impar += 1;
	}


	if(Y > 0){
		i += 1;
	}

	if(Y < 0){
		j += 1;
	}

	if(Y % 2 == 0){
		par += 1;
	}

	if(Y % 2 != 0){
		impar += 1;
	}

	if(Z > 0){
		i += 1;
	}

	if(Z < 0){
		j += 1;
	}

	if(Z % 2 == 0){
		par += 1;
	}

	if(Z % 2 != 0){
		impar += 1;
	}

	if(T > 0){
		i += 1;
	}

	if(T < 0){
	j += 1;
	}

	if(T % 2 == 0){
		par += 1;
	}

	if(T % 2 != 0){
		impar += 1;
	}

	if(Q > 0){
			i += 1;
	}

	if(Q < 0){
		j += 1;
	}

	if(Q % 2 == 0){
		par += 1;
	}

	if(Q % 2 != 0){
		impar += 1;
	}

	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", i);
	printf("%d valor(es) negativo(s)\n", j);
	
	return 0;
}
