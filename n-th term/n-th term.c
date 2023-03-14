#include <stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,an,n,d;
    num1=1;
    num2=3;
    num3=5;
    num4=7;
    num5=9;
    num6=11;
    num7=13;
    num8=15;
    num9=17;
    n=9;
    d=2;
    printf("Display the sequence: %d,%d,%d,%d,%d,%d,%d,%d,%d \n",num1,num2,num3,num4,num5,num6,num7,num8,num9);
    //calculates nth term
    an=num1+(n-1)*d;
    printf("The last digit in the arithmetic sequence is: %d \n",an);
    //Difference between terms
    d= (an-num1)/(n-1);
    printf("The difference of the numbers of the sequence is: %d \n",d);
    return 0;

}
