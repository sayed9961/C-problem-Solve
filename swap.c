#include<stdio.h>
int main() 
{
int a,b, c;
printf("Enter Two numbers for swaping \n");
scanf("%d %d",&a , &b);
c=a;
a=b;
b=c;
printf("After swaping the numbers are = %d %d", a, b);
    return 0;
}