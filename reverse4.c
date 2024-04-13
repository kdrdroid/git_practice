#include<stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter 3 digit number:");
    scanf("%ld%ld%ld", &n, &i, &j);

    printf("The reverse is:%ld%ld%ld\n", j, i, n);
    return 0;
}