#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbers;");
    scanf("%d", &n);
    if (n > 0)
        printf("No is positive");
    else
        printf("no is negative");
    printf("\n");
    return 0;
}