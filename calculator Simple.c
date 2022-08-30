#include<stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, div;
    printf("Input any two numbers : ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of the given numbers : %d\n", sum);
    sub = num1 - num2;
    printf("The difference of the given numbers : %d\n", sub);
    mult = num1 * num2;
    printf("The product of the given numbers : %d\n", mult);
    div = (num1 / num2);
    printf("The quotient of the given numbers : %d\n", div);
    return 0;
}



/*
#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;
    printf("Input any two numbers : ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of the given numbers : %d\n", sum);
    sub = num1 - num2;
    printf("The difference of the given numbers : %d\n", sub);
    mult = num1 * num2;
    printf("The product of the given numbers : %d\n", mult);
    div = (float)num1 / num2;
    printf("The quotient of the given numbers : %f\n", div);
    mod = num1 % num2;
    printf("MODULUS = %d\n", mod);
    return 0;
}
*/
