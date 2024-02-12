//// 26 Convert temperature Fahrenheit to Celsius
#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
 
    printf ("Enter the Temperature in Fahrenheit: ");
    scanf ("%f", & Fahrenheit);
 
    //Formula to convert fahrenheit to celsius
    Celsius = (Fahrenheit - 32) * 5/9;
    printf ("The Temperature in Celsius is: %f\n", Celsius);
    return 0;
}
