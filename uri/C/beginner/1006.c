#include <stdio.h>

int main ()
{
    double A, B, C, x, y, t, MEDIA;

    scanf ("%lf %lf %lf", &x, &y, &t);

    A = x * 2;
    B = y * 3;
    C = t * 5;

    MEDIA = (A + B + C)/10;

    printf ("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
