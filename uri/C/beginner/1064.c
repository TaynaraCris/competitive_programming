#include <stdio.h>

int main()
{

	double X, Y, Z, T, Q, W, media;
	int i;

	scanf("%lf %lf %lf %lf %lf %lf", &X, &Y, &Z, &T, &Q, &W);

	if(X > 0){
		i += 1;
		media += X;
	}

	if(Y > 0){
		i += 1;
		media += Y;
	}

	if(Z > 0){
		i += 1;
		media += Z;
	}

	if(T > 0){
		i += 1;
		media += T;
		}

	if(Q > 0){
			i += 1;
			media += Q;
		}

	if(W > 0){
			i += 1;
			media += W;
		}

	printf("%d valores positivos\n", i);
	printf("%.1lf\n", media/i);

	return 0;
}
