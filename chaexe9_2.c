#include<stdio.h>

int check (int x, int y, int n)
{
    if ((x && y)>0 && (x && y)<(n-1))
    return 1;
    else
    return 0;
}
int main(void)
{
    int x, y, n;
    printf(" the value of x , y and n:");
    scanf(" %d %d %d", &x, &y, &n);

    printf("%d", check(x, y, n));
}