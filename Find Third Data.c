#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st angles of triangle: ");
    scanf("%d", &a);
    printf("Enter 2nd angles of triangle: ");
    scanf("%d", &b);
    c = 180 - (a + b);
    printf("Third angle of the triangle = %d", c);

    return 0;
}
