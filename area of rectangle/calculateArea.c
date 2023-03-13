#include <stdio.h>
//gets area of rectangle
int main()
{
    int length,width;
    printf("Enter the length of the rectangle in centimetres: ");
    scanf("%d",&length);
    printf("Enter the width of the rectangle in centimetres: ");
    scanf("%d",&width);
    printf("The area of the rectangle is: %d cm\n",length*width);
    return 0;
}
