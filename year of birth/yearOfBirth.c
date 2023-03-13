#include <stdio.h>
//program to calculate year of birth
int main ()
{
    int year,age;
    printf("Enter the current year: ");
    scanf("%d",&year);
    printf("Enter your current age: ");
    scanf("%d",&age);
    printf("You were born in the year: %d \n",year-age);
}
