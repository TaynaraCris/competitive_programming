#include <stdio.h>

int main ()
{
    int codigo1, codigo2, npecas1, npecas2;
    double pago1, pago2, valorPagar;

    scanf ("%d %d %lf", &codigo1, &npecas1, &pago1);
    scanf ("%d %d %lf", &codigo2, &npecas2, &pago2);

    valorPagar = (npecas1 * pago1) + (npecas2 * pago2);

    printf ("VALOR A PAGAR: R$ %.2lf\n", valorPagar);

    return 0;
}
