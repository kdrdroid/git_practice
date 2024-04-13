#include<stdio.h>

int main(void)
{
    int n, i, j, k;
    
    printf("Enter number with 3 digits:");
    scanf("%d", &n);

    i=n%10;
    j=((n-i)/10) %10;
    k=(n-(j*10+i))/100.0;
    printf("i=%d\nj=%d\nk=%d\n", i, j, k);

    printf("reverse of 3 digits is :%d\n", i*100+j*10+k);
    return 0;
}