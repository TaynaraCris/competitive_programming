#include <stdio.h>

int main()
{

	double a, b, c, d, e, f;
	int positivo = 0;

	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

	if(a != 0 || b != 0 || c != 0 || d != 0 || e != 0 || f != 0){
		if(a > 0){
			positivo++;
		}
		if(b > 0){
			positivo++;
		}
		if(c > 0){
			positivo++;
		}
		if(d > 0){
			positivo++;
		}
		if(e > 0){
			positivo++;
		}
		if(f > 0){
			positivo++;
		}
	}

	printf("%d valores positivos\n", positivo);

	return 0;
}
