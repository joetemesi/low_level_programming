#include <stdio.h>
#include <math.h>
int main()
{
    //declaring variables
    int num;
    int power2,power4,power6,power8;

    printf("Enter a number:");
    scanf("%d",&num);

    power2=2;
    power4=4;
    power6=6;
    power8=8;

    float num2 = pow(num,power2);
    float num4 = pow(num,power4);
    float num6 = pow(num,power6);
    float num8 = pow(num,power8);

    printf("%d raised to the power %d is: %.1f \n",num,power2,num2);
    printf("%d raised to the power %d is: %.1f \n",num,power4,num4);
    printf("%d raised to the power %d is: %.1f \n",num,power6,num6);
    printf("%d raised to the power %d is: %.1f \n",num,power8,num8);

    return 0;
}
