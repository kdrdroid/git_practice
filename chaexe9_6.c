#include<stdio.h>

int digit(int n, int k)
{
    int i, remainder;
    for (i=1; i<=k; i++){
    remainder = (n%10);
    n /=10;
    } return remainder;
    
    
}
int main(void)
{
    printf("The digit is %d", digit(829, 2));
    
}