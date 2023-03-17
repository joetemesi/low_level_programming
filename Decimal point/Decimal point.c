#include <stdio.h>
int main ()
{
    float x,y;
    int z;
    printf("Enter the value of X: ");
    //x must be floating point
    scanf("%f",&x);
    z=x;
    y = x-z;
    printf("The value is %.2f: \n",y);
    return 0;

}
