#include <stdio.h>
int main()
{
    int x, rem = 0, sum = 0;
    printf("enter the value of x:");
    scanf("%d", &x);

    rem = x % 10;
    x = x / 10;
    sum = sum + rem;

    rem = x % 10;
    x = x / 10;
    sum = sum + rem;

    rem = x % 10;
    x = x / 10;
    sum = sum + rem;

    printf("%d", sum);
    printf("\n");
}