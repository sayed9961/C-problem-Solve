#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (pow(x,3)-2*x-5)
void main()
{
    float a, b, xr, f0, f1, f2, e;
    int step = 0;
up:
    printf("\nEnter two initial guesses:\n");
    scanf("%f%f", &a, &b);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);
    f0 = f(a);
    f1 = f(b);
    if( f0 * f1 > 0.0)
    {
        printf("Incorrect Initial Guesses.\n");
        goto up;
    }
    printf("\nStep\t\t   a\t\t   b\t\t   xr\t\t   f(xr)\n");
    do
    {
        xr = (a + b)/2;
        f2 = f(xr);
        printf("%d\t\t%f\t%f\t%f\t%f\n",step, a, b, xr, f2);
        if( f0 * f2 < 0)
        {
            b = xr;
            f1 = f2;
        }
        else
        {
            a = xr;
            f0 = f2;
        }
        step = step + 1;
    }
    while(fabs(f2)>e);
    printf("\n Root is: %f", xr);
    getch();
}
