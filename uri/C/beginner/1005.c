#include <stdio.h>

int main ()
{
    double A, B, x, y, MEDIA;

    scanf ("%lf", &x);
    scanf ("%lf", &y);

    A = x * 3.5;
    B = y * 7.5;

    MEDIA = (A + B)/11.0;

    printf ("MEDIA = %.5lf\n", MEDIA);

    return 0;
}

