#include <stdio.h>
int main()
{
    int a[20]= {5, 8, 14, 15, 22, 26, 31, 47,52},x,n,i;
    printf("Enter the number of elements:");//Number of element
    scanf("%d",&x);//Geting Number for array

    for(i=0; i<x; i++)//Starting Of Array Using For Loop-
    {
        printf("The elements are:");//Printing the Array
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search:");//Number Search
    scanf("%d", &n);//Getting The Number To Search
    for (i=0; i<=a[i]; i++)//Finding The Number Using For Loop
    {
        if (n==a[i])
        {
            printf("item found in %d",i+1 );//If Found Print The Number
            return 0;
        }
    }
    printf("Not Found");//If The Number Not Found
    return 0;
}
