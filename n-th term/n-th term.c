#include <stdio.h>
//nth term = num1+(terms-1)*difference
int main()
{
    //declare and get variables
    int num1,terms,difference,nth;
    printf("What is the first number in the arithmetic:");
    scanf("%d",&num1);
    printf("What is the number of terms in the sequence: ");
    scanf("%d",&terms);
    printf("What is the difference between the terms in the sequence:");
    scanf("%d",&difference);
    //arithmetic sequence formula
    nth = num1+(terms-1)*difference;
    printf("The nth term in the series is: %d \n",nth);

    return 0;
}
