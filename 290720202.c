#include<stdio.h>
int main()
{
int year;
printf("Enter the years in number: \n");
scanf("%d", &year);
//printf("%d",year);
(year%400==0) ? printf("%d year is leap year", year) : (year%100==0 && year%4==0) ? printf("%d is not leap year but the leap year is %d", year, year+4):printf("invalid number");
    return 0;
}