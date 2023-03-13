#include <stdio.h>
//Calculate perimeter
int main()
{
    double length,width;
    printf("Enter the length of the rectangle in cm: ");
    scanf("%lf",&length);
    printf("Enter the width of the rectangle in cm: ");
    scanf("%lf",&width);
    double perimeter = ((length+width)*2);
    printf("The perimeter of the rectangle is %.1lf cm\n",perimeter);
    return 0;
}
