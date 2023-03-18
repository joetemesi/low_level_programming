#include <stdio.h>
int main()
{
    int number,hundreds,hundredremainder,tens,ones;
    printf("Enter the value of the three digit number: ");
    scanf("%d", &number);
    hundreds = number/100;
    hundredremainder = number%100;
    tens = hundredremainder/10;
    ones = hundredremainder%10;
    printf("The number %d in reverse is: %d%d%d \n",number,ones,tens,hundreds);
    return 0;
}
