#include<stdio.h>
double func(double x)
{
    return x*x*x - 2*x - 5;
}
double e=0.0001;
double xr;
void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }
    xr = a;
    while ((b-a) >= e)
    {
        xr = (a+b)/2;
        if (func(xr) == 0.0){
            printf("Root = %lf\n",xr);
            break;
        }
        else if (func(xr)*func(a) < 0){
                printf("Root = %lf\n",xr);
                b = xr;
        }
        else{
                printf("Root = %lf\n",xr);
                a = xr;
        }
    }
}
int main()
{
    double a,b;
    a=2;
    b=3;
    printf("The function used is x^3-2x-5\n");
    printf("a = %lf\n",a);
    printf("b = %lf\n",b);
    bisection(a,b);
    printf("\n");
    printf("Accurate Root calculated is = %lf\n",xr);
    return 0;
}
