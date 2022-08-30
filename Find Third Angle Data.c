#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st angles of triangle: ");
    scanf("%d", &a);//Getting 1st Value Of Triangle
    printf("Enter 2nd angles of triangle: ");
    scanf("%d", &b);//Getting 1st Value Of Triangle
    c = 180 - (a + b);//Finding The 3rd Value Of Triangle
    printf("Third angle of the triangle = %d", c);//Printing 3rd Value of Triangle
    return 0;
}
