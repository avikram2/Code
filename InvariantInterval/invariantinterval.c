#include <stdio.h>
#include <stdlib.h>


int checkinterval(double interval);

int printinvariant(double ct1, double x1, double y1, double z1, double ct2, double x2, double y2, double z2);

int checkinterval(double interval){
if (interval < 0){
    printf("\nSpacelike");
    return 0;
}
if (interval == 0){
    printf("\nLightlike");
    return 0;
}
else {
    printf("\nTimelike");
    return 0;
}
return 0;

}

int printinvariant(double ct1, double x1, double y1, double z1, double ct2, double x2, double y2, double z2){
 double interval = ((ct2-ct1)*(ct2-ct1))-((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1))-((z2-z1)*(z2-z1));
    printf("The invariant interval from between A and B is: %lf", interval);
checkinterval(interval);
return 0;
}

int main() {
//Code to calculate invariant interval between two points/events, and
//it informs the user if the interval is timelike, spacelike, or lightlike
//main prompts user for info, then invokes functions to calculate interval, and that function invokes another to determine if spacelike, timelike, lightlike

    printf("Only enter in values for distance coordinates in terms of 'light' units, for example, light years, or light-days");
    //Ensure dimensionless units
    printf("\nPlease ensure that the units of distance is the same as the unit of time*c");
    printf("\nAssume that the two events have a common origin");

    double ct1; //Declare variables for first event
    double x1;
    double y1;
    double z1;
double ct2, x2, y2, z2;
    printf("Enter in the coordinates of event A, in this format: ct x y z \n");
    scanf("%lf %lf %lf %lf", &ct1, &x1, &y1, &z1);
    printf("Enter in the coordinates of event B, in the same format as before: \n");
    scanf("%lf %lf %lf %lf", &ct2, &x2, &y2, &z2);
    printf("\n");
    printinvariant(ct1, x1, y1, z1, ct2, x2, y2, z2);
    printf("\n");

}
