#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "PerformLorentz.h"
/* By Ayush Vikram. PerformLorentz function takes in values of x, t, and beta from main, and print out
values of x', t', and gamma, using the Lorentz transformation equations. The units must be dimensionless,
for example, if time is in minutes, then distance should be in light-minutes.
This ensures that the value of c is 1.*/
int PerformLorentz(double x, double t, double beta)
{

    double gamma = (1/(sqrt(1-(beta*beta))));
    printf("\nThe value of gamma is %lf", gamma);
    double xprime = gamma*(x-beta*t);
    double tprime = gamma*(t-beta*x);
    printf("\nThe value of x prime is: %lf", xprime);
    printf("\nThe value of t prime is: %lf", tprime);

    return 0;
}

