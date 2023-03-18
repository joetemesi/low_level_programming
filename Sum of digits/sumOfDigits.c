#include <stdio.h>
int main()
{
    //x must be a three digit integer
    int x,y,z,a,b,sum;
    printf("Enter the value of a three digit integer: ");
    scanf("%d",&x);
    y = x/100;
    z = x%100;
    a = z/10;
    b = z%10;
    sum = y+a+b;
    printf("The sum of individual digits is %d+%d+%d = %d  \n",y,a,b,sum);

    return 0;
}
