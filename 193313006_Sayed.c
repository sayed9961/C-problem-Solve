#include <stdio.h>
int main()
{
    int year;
    printf("Enter years:");
    scanf("%d",&year);
    (year%400==0)?printf("%d is a leaf year ",year):(year%100==0)?printf("%d is not a leaf year \n Nearest Leaf Year is %d",year,year+4)
    :(year%4==0)?printf("%d is a leaf year",year):(year%4==1)?printf("%d is not a leaf year. \n %d is the leaf year",year,year+3)
    :(year%4==3)?printf("%d is the leaf year",year+1):printf("%d & %d are the nearest leaf year",year-2,year+2);
    return 0;
}
