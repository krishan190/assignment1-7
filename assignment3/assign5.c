#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
        printf("No is 3 digit number ");
    else
        printf("No is not 3 digit number ");
}