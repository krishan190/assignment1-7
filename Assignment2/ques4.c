#include <stdio.h>
int main()
{
    int x = 15, y = 30;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("x=%d y=%d", x, y);
    printf("\n");
}