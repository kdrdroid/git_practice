#include<stdio.h>

int main(void)
{
    int a, d, c, b, i, j;
    printf("Enter fraction a/b+c/d:");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);
    i=a*d+c*b;
    j=b*d;
    printf("%d/%d\n", i, j);
    return 0;


}


