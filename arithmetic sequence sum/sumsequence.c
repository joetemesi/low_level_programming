#include <stdio.h>
//sum of sequence = (num1+numn)*term/2
int main()
{
    int num1,numn,term,sum;
    printf("Enter the FIRST number of the sequence: ");
    scanf("%d",&num1);
    printf("Enter the LAST number in the sequence: ");
    scanf("%d",&numn);
    printf("Enter the number of terms in the sequence: ");
    scanf("%d",&term);
    sum = (num1+numn)*term/2;
    printf("The sum is: %d \n",sum);
    return 0;
}
