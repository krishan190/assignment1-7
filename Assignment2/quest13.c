#include<stdio.h>
int main()
{
    int x = 625;
    x = x/10 + x%10*100;
    printf("%d",x);
    printf("\n");
}