#include <stdio.h>
#include <stdlib.h>

int main()
{

	double A, B, C, triangulo, trapezio;

	scanf("%lf %lf %lf", &A, &B, &C);

	if(abs(B - C) < A && A < (B + C)){
		if(abs(A - C) < A && A < (A + C)){
		if(abs(A - B) < C && C < (A + B)){
		triangulo = A + B + C;
		printf("Perimetro = %.1lf\n", triangulo);
		}}}

	 else{
	 	trapezio = ((A + B)/2) * C;
	 	printf("Area = %.1lf\n", trapezio);
	 }

	return 0;
}
