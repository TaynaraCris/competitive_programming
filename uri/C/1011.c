#include <stdio.h>
#include <math.h>
int main ()
{
    double R, VOLUME, pi = 3.14159;

    scanf ("%lf", &R);

    VOLUME = (4.0/3) * pi * pow(R,3);

    printf ("VOLUME = %.3lf\n", VOLUME);

    return 0;
}
