#include<stdio.h>

int num_digits(int n)
{
    int i;
    while(n>0){
      n/=10;
      i++;
    }
    return i;
}
int main(void)
{
    int n;
    printf("Counting digits in the number:");
    scanf("%d", &n);
    printf("The digits in %d are %d", n, num_digits(n));

}