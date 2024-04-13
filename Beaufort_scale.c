#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the wind speed(knots):");
    scanf("%d", &n);
    if (n<1)
      printf("Calm");
    else if (n>=1&&n<=3)
      printf("Light");
    else if (n>=4&&n<=27)
      printf("Breeze");
    else if (n>=28&&n<=47)
      printf("Gale");
    else if (n>=48&&n<=63)
      printf("Storm");
      else
       printf("Hurricane");


}