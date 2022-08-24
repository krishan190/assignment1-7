#include <stdio.h>
int main()
{
    int D, M, Y;
    printf("Enter the date , month, year:");
    scanf("%d/%d/%d", &D, &M, &Y);
    printf("(Day-%d,Month-%d,Year-%d)", D, M, Y);
    printf("\n");
    return 0;
}