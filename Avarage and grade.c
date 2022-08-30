/*#include<stdio.h>
int main()
{
    int m,a,sum;
    float avg;
    printf("Enter the marks :");
    scanf("%d", &m);
    while (m>100 || m<1 )
    {
        printf("invalid Input please enter within range of (1 to 100)");
        printf("Please Enter Again");
        scanf("%d" &m);
    }
    for (a = 0; a < m; a++ )
        printf("")

}*/
#include<stdio.h>
void main()
{
    int n1, n2, n3, marks;
    printf("Enter your marks ");
    scanf("%d %d %d",&n1, &n2, &n3);
    marks = (n1 + n2+ n3)/3;
    printf("The Avarage of Marks is %d \n", marks);
    if(marks<33)
    {
        printf("You Got Grade F");
    }
    else if(marks>=33 && marks<40)
    {
        printf("You Got Grade D");
    }
    else if(marks>=40 && marks<50)
    {
        printf("You Got Grade C");
    }
    else if(marks>=50 && marks<60)
    {
        printf("You Got Grade B");
    }
    else if(marks>=60 && marks<70)
    {
        printf("You Got Grade A-");
    }
    else if(marks>=70 && marks<80)
    {
        printf("You Got Grade A+");
    }
    else
    {
        printf("Please Enter the Marks Again");
    }
}
