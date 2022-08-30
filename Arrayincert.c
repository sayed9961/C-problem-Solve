#include <stdio.h>
//#define n 10
#include<stdio.h>
int main() {
    int a[100],i, pos, val,n;
    printf("how many element for the array=\n");
    scanf("%d",&n);
    printf("enter element for the array=\n");
    for(i =0; i<n;i++)
    {
    scanf("%d", &a[i]);
    }
    printf("\n enter the position of new element=");
    scanf("%d",&pos);
    printf("\n enter the position of new element=");
    scanf("%d",&val);
   for(i=n;i>=pos;i--)
   {
     a[i] = a[i - 1];
   }
   a[pos-1] = val;
   n++;
   printf ("\n The new array is=");
      for(i =0; i<n;i++)
      {
   printf("\n %d",a[i]);
      }
    return 0;
}
