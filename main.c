#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "PerformLorentz.h"

/* By Ayush Vikram. The combined code takes in values of x, t, and beta, and prints out
values of x', t', and gamma, using the Lorentz transformation equations. The units must be dimensionless, for example, if time is in
minutes, then distance should be in light-minutes. This ensures that the value of c is 1.
The main prompts the user for x, t, and beta, and passes it along to the PerformLorentz function.
*/
int main()
{
    printf("Please enter all units such that distance is measured in light-units, for example, light-days, light-years, eg.\n Please enter all times with the same units as the distance, for example if distance is in light days, then time should be in days. \n ");


    double x; //value of x in stationary frame
    printf("Enter the x value(x in stationary frame)");
    scanf("%lf", &x);
    printf("\nEnter the time t value (t of the stationary frame)");
    double t;
    scanf("%lf", &t);
    double beta;
    printf("\nEnter the value of beta, defined to be v/c");
    scanf("%lf", &beta);

    PerformLorentz(x, t, beta);
}
