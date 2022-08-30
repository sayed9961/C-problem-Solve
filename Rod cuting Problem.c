#include<stdio.h>
#include<limits.h>
int max(int a, int b) { return (a > b)? a : b;}
int cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;
   for (i = 1; i<=n; i++)
   {
       int maxval = INT_MIN;
       for (j = 0; j < i; j++)
         maxval = max(maxval, price[j] + val[i-j-1]);
       val[i] = maxval;
   }

   return val[n];
}
int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtain Value is %d ", cutRod(arr, size));
    getchar();
    return 0;
}
