#include <stdio.h>
int main()
{
    int year;
    printf("Enter the years :");
    scanf("%d",&year);
    (year%400==0)? printf("leaf year= %d ",year)
    :(year%4==0 && year%100!=0)? printf("leaf year= %d ",year)
    :printf(" the year is not leaf");
    return 0;
}