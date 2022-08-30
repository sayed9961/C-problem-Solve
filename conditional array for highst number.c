#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the Integer Numbers for compare: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
   (n1>n2 && n1>n3) ? printf("1st Number is Biggest ") : (n2>n1 && n2>n3) ? printf("2nd number is biggest") : (n3>n1 && n3>n2) ? printf("3rn Number is Biggest") : printf("Number is invalid");
    return 0;
}
