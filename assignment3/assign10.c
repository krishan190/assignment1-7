#include <stdio.h>
int main()
{
    int cp, sp;
    float profit, loss;
    printf("Enter the product of cp and sp:");
    scanf("%d%d", &cp, &sp);
    if (cp < sp)
    {
        profit = (sp - cp) * 100 / cp;
        printf("profit = %f", profit);
    }
    else
    {
        loss = (cp - sp) * 100 / cp;
        printf("loss = %f", loss);
    }
    printf("\n");
}