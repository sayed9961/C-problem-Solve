#include <stdio.h>
int main()
{
    int a[20]= {2,4,6,8,10,12,14,16,18,20}, first, last, mid, x=20,i; // Array has Fixed Item & Search Value is predifined
    first = 0;
    last = 20-1;
    mid = (first+last)/2; //Finding Array Mid Point
    while (first < last)
    {
        if ( a[mid] == x) // When the value Can be found in the mid at any point
        {
            printf("%d found in %d",x,mid+1); // When Found in Mid Position
            break;
        }
        else if (a[mid] < x)// When Mid is Larger
            first = mid +1;
        else
            last = mid - 1;// When mid is smaller
        mid = (first+last)/2; //Updating Mid Point
    }
    if (first >= last)// When the value is not found in the mid at any point
        printf("Not found");
    return 0;
}
