#include <stdio.h>

int main ()
{
    char nome[300];
    double salario, TOTAL, montante;
    int i;

    scanf ("%s %lf %lf", &nome, &salario, &montante);

    TOTAL = montante * 0.15 + salario;

    printf ("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
