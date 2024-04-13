#include<stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    *sum = 0.0;
    for( i=0; i<n; i++){
        scanf("%d", &a[i]);
        *sum += a[i];
    }
    *avg =*sum/n; 
}
int main(void)
{
    int n;
    double a[n], avg, sum;
    printf("Enter 10 numbers :");
    avg_sum(a , 10, &avg, &sum);

    printf("total is %d and average is %d", sum, avg);
    
}