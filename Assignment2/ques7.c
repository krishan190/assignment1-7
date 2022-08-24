#include <stdio.h>
int main()
{
    int x, result = 0, count = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        result = x & 1;
        count++;
        if (result == 1)
        {
            printf("%d", count);
            printf("\n");
            break;
        }
        x = x >> 1;
    }
}