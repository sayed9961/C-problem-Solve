#include<stdio.h>
int main()
{
float m1,m2,m3,avg,per;
printf("Enter 3 sub mark out of 100:\n");
scanf("%f%f%f",&m1,&m2,&m3);
per=(m1+m2+m3/100)/3;
printf("Mark is %0.2f percentage.\n so your result is",per);
if(per>=60)
printf("1st division");
else if(per>=50&&per<=59)
printf("2nd devision");
else if(per>=40&&per<=49)
printf("3rd division");
else if(per<40)
printf("Fail");
return 0;
}
