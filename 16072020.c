#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    if(num>=10)
    {
        printf("Number is 10 or bigger");
    }
    else
    {
        printf("Invalid") ;
    }
    return 0;
}
