#include <stdio.h>
int main()
{
    char a;
    printf("Enter the charecter:");
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
        printf("Lowercase:");
    else if (a >= 65 && a <= 90)
        printf("Uppercase:");
    else
        printf("Not a alphabet:");
    printf("\n");
}