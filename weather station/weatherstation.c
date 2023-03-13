#include <stdio.h>
int main()
//Converts temperature to Farenheit
{
    double celcius,farenheit;
    printf("Enter the current temperature in Degree celcius: ");
    scanf("%lf",&celcius);
    farenheit = (double)(celcius*1.8)+32;
    printf("The temperature in degrees Farenheit is %.2lf F \n",farenheit);
    return 0;
}
