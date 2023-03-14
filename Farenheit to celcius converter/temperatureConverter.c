#include <stdio.h>
//converts Degree arenheit to celcius
int main ()
{
    double celcius,farenheit;
    printf("Enter the temperature in Farenheit: ");
    scanf("%lf",&farenheit);
    celcius = (double)(farenheit - 32)/1.8;
    printf("The temperature in degree celcius is: %.2lf", celcius);
    return 0;
}
