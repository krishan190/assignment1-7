#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number;");
    scanf("%d", &n);
    if (n % 5 == 0)
        printf("No is divisible by 5");
    else
        printf("Not divisible by 5");
    printf("\n");
    return 0;
}