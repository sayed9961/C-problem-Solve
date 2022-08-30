#include<stdio.h>
int main()
{
    int y,m,w,d,nd;
    printf("Enter the days for convert into Days, Weeks, Months & Years: \n");
    scanf("%d", &nd);
    y = nd/365;
    nd = nd-(365*y);
    m = nd/30;
    nd = nd-(d*30);
    w = nd/7;
    d = nd-(w*7);
    printf("%d year's, %d Month's, %d Week's, %d Day's", y,m,w,d);
    return 0;
}
