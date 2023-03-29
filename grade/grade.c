#include <stdio.h>
int main()
{
    //initialize variables
   int grade;
   printf("Enter the grade attained in the test:");
   scanf("%d",&grade);
   //check conditions.
   if (grade>=80)
        printf("Congrats,excellent job\n");
        else if (grade>=60)
            printf("Not bad, try harder next time\n");
        else printf("Try again!\n");
    return 0;

}

