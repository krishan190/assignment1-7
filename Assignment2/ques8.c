#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    if (x & 1)
        printf("no is odd");
    else
        printf("no is even");
    printf("\n");
}