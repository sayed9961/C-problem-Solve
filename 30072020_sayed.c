#include <stdio.h>
int main()
{
    int year;
    printf("Enter years:");
    scanf("%d",&year);
    (year%400==0)? printf("%d is a leap year ",year):(year%100==0)? printf("%d is not a leap year \n Nearest Leap Year is %d",year,year+4)
    :(year%4==0)? printf("%d is a leap year",year):(year%4==1)? printf("%d is not a leap year. \n %d is the nearest leap year",year,year+3)
    :(year%4==3)? printf("%d is the nearest leap year",year-3): printf("%d & %d are the nearest leap year",year-2,year+2);
    return 0;
}