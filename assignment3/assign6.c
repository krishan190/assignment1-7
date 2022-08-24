#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number:");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is greater", a);
    else if (a < b)
        printf("%d is greater", b);
    else
        printf("%d Both are equal", a);
    printf("\n");
}