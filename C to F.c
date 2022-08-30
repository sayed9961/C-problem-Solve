#include<stdio.h>
int main()
{
    float far, cel;
    printf("Enter the value in Celsius: ");
    scanf("%f", &cel);
    far = cel*9/5+32;
    printf("The farenhight value is %.2f °F", far);
    return 0;
}
