#include <stdio.h>
int main()
{
    char c;
    printf("Enter a charecter:");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
        printf("lowoercase Alphabet");
    else if (c >= 'A' && c <= 'Z')
        printf("Uppercase Alphabet");
    else if (c >= '0' && c <= '9')
        printf("digit");
    else
        printf("Special charecter");
    printf("\n");
}