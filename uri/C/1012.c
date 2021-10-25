#include <stdio.h>
#include <math.h>

int main ()
{
    double TRIANGULO, CIRCULO, TRAPEZIO,QUADRADO, RETANGULO;
    double A, B, C, pi = 3.14159;

    scanf ("%lf %lf %lf", &A, &B, &C);

    TRIANGULO = (A * C)/2;
    CIRCULO = pow(C, 2) * (pi);
    TRAPEZIO = ((A + B)* C)/2;
    QUADRADO = pow(B, 2);
    RETANGULO = A * B;

    printf ("TRIANGULO: %.3lf\n", TRIANGULO);
    printf ("CIRCULO: %.3lf\n", CIRCULO);
    printf ("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf ("QUADRADO: %.3lf\n", QUADRADO);
    printf ("RETANGULO: %.3lf\n", RETANGULO);

    return 0;
}
