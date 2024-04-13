#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter number greater than 0 :");
    scanf("%d", &n);

    if (n <= 9)
       printf("The number %d has 1 digit", n);
    else if (n <=99)
       printf("The number %d has 2 digits", n);
    else if (n<=999)
       printf("The number %d has 3 digits", n);
    else if (n<=9999)
       printf("The number %d has 4 digits", n);
      else 
        printf("The number %d has more than 4 digits ", n);




}