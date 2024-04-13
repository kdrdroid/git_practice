#include<stdio.h>
int main(void)
{
    float n;
    printf("Enter taxable income:");
    scanf("%f", &n);
    if (n>7000)
      printf("The tax due :$%.2f", 230+((n*0.06)/7000.0));
    else if (n>=5250)
      printf("The tax due :$%.2f", 142.50+((n*0.05)/5250.0));
    else if (n>=3750)
      printf("The tax due :$%.2f", 82.5+((n*0.04)/3750.0));
    else if (n>=2250)
      printf("The tax due :$%.2f", 37.5+((n*0.03)/2250.0));
    else if (n>=750)
      printf("The tax due :$%.2f", 7.5+((n*0.02)/750.0));
     else
       printf("The tax due :$%.2f", n*0.01);


}