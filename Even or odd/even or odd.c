#include <stdio.h>
int main()
{
    //Declare and initialize variables
    int number;
    int modulus;
    printf("Enter a number:");
    scanf("%d",&number);

    modulus=number%2;
    //condition to check if variable is even or odd

    if (modulus>0)
        printf("%d is an odd number\n",number);
    else printf("%d is an even number\n",number);
    return 0;
}
