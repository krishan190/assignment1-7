#include <stdio.h>
int main()
{
    int n, i, res;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        res = n * i;
        printf("%d * %d =%d ", n, i, res);
        printf("\n");
    }
    printf("\n");
}