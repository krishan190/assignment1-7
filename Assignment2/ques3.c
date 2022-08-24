#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x and y");
    scanf("%d %d", &x, &y);
    int temp = x;
    x = y;
    y = temp;
    printf("swap the value of x=%d and y =%d", x, y);
    printf("\n");
    return 0;
}