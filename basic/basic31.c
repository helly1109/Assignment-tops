//31. Convert kilometers into meters.
#include <stdio.h>
int main() 
{
    double kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000;

    // Print the result
    printf("%f kilometers is equal to %f meters\n ", kilometers, meters);

    return 0;
}
