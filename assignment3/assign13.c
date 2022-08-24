#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 2 == 0)
        printf("No is divisible by 3 and 2");
    else
        printf("No is not divisible by 3 and 2");
    printf("\n");
}