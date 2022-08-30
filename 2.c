# include <stdio.h>
int main()
{
    char c;
    float n1, n2;

    printf ("Enter the operator for calculation : ");
    scanf ("%c",&c);

    printf( "\n Enter two Number : ");
    scanf("%d, %d", &n1, &n2);

    switch(c)
    {
        case '+':
            printf("The Result is %d", n1 + n2);
            break;

        case '-':
            printf("The Result is %d", n1 - n2);
            break;

        case '*':
            printf("The Result is %d", n1 * n2);
            break;

        case '/':
            printf("The Result is %d", n1 / n2);
            break;

        case '%':
            printf("The Result is %d", n1 % n2);
            break;

        default:
            printf("Error! operator is not correct");
            break;
    }

    return 0;
}
