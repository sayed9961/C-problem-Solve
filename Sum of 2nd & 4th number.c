#include<stdio.h>
int main()
{
    int num2, num4, sum,s;
    printf("Enter the 4 digit number :\n");
    scanf("%d",&s);
    num2 = s / 100;
    num4 = s / 10;
    sum = num2 + num4;
    printf(" the 2nd number is %d , 4th Number is %d & sum is %d", num2, num4, sum);
    return 0;
}
