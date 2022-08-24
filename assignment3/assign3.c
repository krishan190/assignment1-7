#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number;");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("No is even");
    else
        printf("No is odd");
    printf("\n");
    return 0;
}