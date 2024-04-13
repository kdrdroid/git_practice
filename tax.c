#include<stdio.h>

int main(void)
{
    float n;
    printf("Enter amount:");
    scanf("%f", &n);
    n=n+((n*5)/100.00);
    printf("Total amout paid:%.2f\n", n);
    return0:
}