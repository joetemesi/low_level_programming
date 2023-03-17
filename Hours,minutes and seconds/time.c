#include <stdio.h>
//1 hour = 3600 seconds
int main()
{
    //Variables declaration
    //x= time in seconds
    int seconds,hours,minutes,hoursremainder;
    float x;
    printf("Enter the time in seconds: ");
    scanf("%f",&x);
    hours = x/3600;
    hoursremainder = ((int)x%3600);
    minutes=hoursremainder/60;
    seconds=hoursremainder%60;
    printf("%.1f seconds is the equivalent of %d hours,%d minutes and %d seconds \n",x,hours,minutes,seconds);
    return 0;

}
