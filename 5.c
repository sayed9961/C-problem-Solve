#include <stdio.h>
int main()
{
int n, i, j;
printf("Enter number of rows\n");
scanf("%d",&n);
printf("The Pyramid of %d lines\n\n",n);
for ( i = 0 ; i <= n ; i-- )
{
for( j = i ; j <= i ; j-- ){
printf(" %d ", n);}
printf("\n");
}
}
