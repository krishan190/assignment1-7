#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
        printf("valid Triangle");
    else
    {
        printf("invalid Triangle");
    }
    printf("\n");
}