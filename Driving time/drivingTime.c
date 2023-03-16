#include <stdio.h>
//Distance = speed*time
//time=Distance/speed
int main()
{
    float remainingtimehours;
    int timeinhours,distance,speed;
    int remainingtime;
    int timeinminutes;
    int minutes;
    printf("What is the distance between the starting and ending point in kilometres: ");
    scanf("%d",&distance);
    printf("What is the average speed in km/h: ");
    scanf("%d",&speed);
    timeinhours = distance/speed;
    //speedinminutes = speed/60;
    remainingtime=distance%speed;
    remainingtimehours=(float)remainingtime/speed;
    minutes= remainingtimehours*60;

     printf("It will take you %d hours and %d minutes to travel %d kilometres at an average speed of %d km/h\n",timeinhours,minutes,distance,speed);


    return 0;
}
