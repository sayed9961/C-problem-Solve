#include <stdio.h>
int main()
{
    int a[100], first, last, mid, x,n,i;
    printf("Enter the number of elements:"); //
    scanf("%d",&n);
    printf("the elements are:\n");//
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to found:");//
    scanf("%d",&x);
    first = 0;
    last = n-1;
    mid = (first+last)/2;//
    while (first < last)
    {
        if ( a[mid] == x)
        {
            printf("%d found in %d",x,mid+1);
            break;
        }
        else if (a[mid] < x)
            first = mid +1;
        else
            last = mid - 1;
        mid = (first+last)/2;
    }
    if (first >= last)//
        printf("Not found");
    return 0;
}
