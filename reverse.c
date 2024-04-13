#include<stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter a number with two digits:");
    scanf("%d", &n);
    i=n%10;
    j=(n-n%10)/10;
    printf("the reverse is:%d\n", (i*10)+j);
    return 0;
}