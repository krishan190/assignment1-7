#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number");
    scanf("%d", &n);
    for (i = n - 1; i >= 0; i--)
    {
        printf(" %d ", 2 * i + 1);
    }
    printf("\n");
}