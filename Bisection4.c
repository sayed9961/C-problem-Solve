#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double function(double x)
{
    return (pow(x,3)-2*x-5);
}
int main()
{
    double a,b,xr;
    double x1=0,x2=0;
     while(function(x1)*function(x2)>0)
     {
         x1--;
         x2++;
     }
     if(function(x2)*function(x2-1)<=0)
     {
         a=x2-1;
         b=x2+1;
     }
     else
     {
         a=x1-1;
         b=x1+1;
     }
     printf("\na\t\tb\t\txr\t\t\n");
    while(fabs(a-b)>=0.0001)
    {
        xr=(a+b)/2;
		printf("%f\t%f\t%f\n",a,b,xr);
        if(function(xr)==0)
            break;
       else if(function(a)*function(xr)<0)
         b=xr;
       else
          a=xr;
    }
    printf("The root is %.5f\n",xr);
    return 0;
}
