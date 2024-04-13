#include<stdio.h>

int g(int p)
{
    return p;
}
int sum(int(*f)(int), int i, int j)
{
    int sum = 0;
       while (i++ <= j)
           sum+=(*f)(i);
           return sum;
}
int main (void)
{
    printf("the sum of counting numbers btn 2 and 10 is %d\n", sum(g, 2, 10));
}