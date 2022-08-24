#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    //     if (year % 4)
    //         printf("Not a leap year");
    //     else if (year % 100)
    //         printf("leap year");
    //     else if (year % 400)
    //         printf("Not a leap year");
    //     else
    //         printf("leap year");
    //     printf("\n");
    //     return 0;
    // }

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("Leap year");
        else
            printf("Not a leap year");
    }
    else
    {
        if (year % 4 == 0)
            printf("leap year");
        else
            printf("Not a leap year");
    }
    printf("\n");
}