#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the value of the first number:");
    scanf("%d",&num1);
    printf("Enter the value of the second number:");
    scanf("%d",&num2);
    printf("Enter the value of the third number:");
    scanf("%d",&num3);

    if (num1>num2&&num1>num3)
        printf("The maximum no is: %d\n",num1);
    else if (num2>num1&&num2>num3)
         printf("The maximum no is: %d\n",num2);
    else if (num3>num1&&num3>num2)
        printf("The maximum no is: %d\n",num3);

    if (num1<num2&&num1<num3)
    printf("The minimum no is: %d",num1);
    else if(num2<num1&&num2<num3)
        printf("The minimum number is: %d",num2);
    else if (num3<num1&&num3<num2)
        printf("The minimum number is: %d",num3);
    return 0;
}
