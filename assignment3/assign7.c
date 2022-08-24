#include <stdio.h>
int main()
{
    int a, b, c, desc;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d", &a, &b, &c);
    desc = b * b - 4 * a * c;
    if (desc > 0)
        printf("Real & distinct");
    else if (desc < 0)
        printf("Imaginary");
    else
    {
        printf("Real & equal");
    }
    printf("\n");
}