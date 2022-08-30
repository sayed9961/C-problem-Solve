#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x*x*x +x*x -1
#define e 0.0001
int main(void)
{
float x0,x1,f1 ;
int i=1;
printf("Using Iterative Method to find root of x^3+x^2-1\n");
printf("Enter value for x0\n");
printf("x0: ");
scanf("%f",&x0);
printf("steps\tx0\tx1\n");
b:x1=f(x0);
printf("%d\t%.4f\t%.4f\n",i,x0,x1);
i++;
if(fabs((x1-x0)/x1)<=e)
{
printf("The root is %.4f",x1);
goto c;
}
else
{
x0=x1;
goto b;
}
c:
getch();
}
