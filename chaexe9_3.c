#include<stdio.h>

int gcd(int m, int n);
int main(void)
{
    int i, j;
    printf("Enter two numbers to find GCD:");
    scanf("%d %d", &i, &j);
    
    printf("The GCD of %d and %d is %d", i, j, gcd(i, j));
    return 0;
}
int gcd(int m, int n)
{
    int remainder;
    while (n!=0)
    {
        remainder  = m % n;
        m =n;
        n = remainder;
    }
    return m;
}