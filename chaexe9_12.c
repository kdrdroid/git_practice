#include<stdio.h>
#define N 10

double inner_product (double a[], double b[], int n);
int main(void)
{
  
  double a[N]={0,1,2,3,4,5,6,7,8,9}, b[N]={10,11,22,33,44,55,66,77,88,99};
  double multiple_add=inner_product(a, b, N);

  printf("The multiple of array a and d is %g", multiple_add);
  return 0;
}
double inner_product (double a[], double b[], int n)
{
    int i;
    double sum =0;
    for (i=0; i < n; i++)
        sum+=(a[i]*b[i]);
    return sum;
}