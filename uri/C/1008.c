#include <stdio.h>

int main ()
{
    int NUMBER,  HoraTrabalhada;
    double recebeHora, SALARY;

    scanf ("%d %d %lf", &NUMBER, &HoraTrabalhada, &recebeHora);

    SALARY = recebeHora * HoraTrabalhada;

    printf ("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER, SALARY);

    return 0;
}

