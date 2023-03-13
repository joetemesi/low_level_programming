#include <stdio.h>
//gets area of rectangle
int main()
{
    double length,width;
    printf("Enter the length of the rectangle in centimetres: ");
    scanf("%lf",&length);
    printf("Enter the width of the rectangle in centimetres: ");
    scanf("%lf",&width);
    printf("The area of the rectangle is: %.1lf cm\n",length*width);
    return 0;
}
