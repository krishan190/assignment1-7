#include <stdio.h>
int main()
{
    int inr;
    float usd = 76.23;
    printf("Enter the amount in INR");
    scanf("%d", &inr);
    usd = inr / usd;
    printf("your USD amount is %f", usd);
    printf("\n");
}