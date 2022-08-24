#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf(" %d ", 2 * i + 1);
    }
    printf("\n");
}