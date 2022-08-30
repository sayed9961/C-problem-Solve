#include <stdio.h>
#include <conio.h>
int main()
{
    int a[1000],i,n,sum=0;
    printf("Enter size of the array : ");
    scanf("%d",&n);//Getting The Size of Array
    printf("Enter elements in array : "); //Getting Number for Array
    for(i=0; i<n; i++)//Printing The Number Using For Loop
    {
        scanf("%d",&a[i]);//Getting The Value Of Array
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];//Sum Using For Loop
    }
    printf("sum of array is : %d",sum);//Printing The Sum Of Array
    return 0;
}
