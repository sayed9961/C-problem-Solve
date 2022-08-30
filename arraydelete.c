#include<stdio.h>
int main()
{
    int a[100], i,n, pos, val;
    printf("Enter the Number of element :");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i =0; i<n;i++)
    {
    scanf("%d", &a[i]);
    }
    printf("The array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n", a[i]);
    }
    printf("Enter the Position:\n");
    scanf("%d", &pos);
  for(i=pos-1;i<n-1;i++)
   {
     a[i] = a[i + 1];
   }
   n--;
   printf ("The new array is= \n ");
      for(i =0; i<n;i++)
      {
   printf("\n %d",a[i]);
      }
    return 0;
}
