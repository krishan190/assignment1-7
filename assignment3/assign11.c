#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33)
        printf("Congratulation you have passed ");
    else
        printf("oops better luck next time ");
    printf("\n");
}