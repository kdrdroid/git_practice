#include<stdio.h>

int largest_element(int a[], int n);
float average(int a[], int n);
int number_of_positive_elements(int a[], int n);
int main(void)
{
    int b[]={2,4,5,6,7};
    printf("The largest element : %d\n", largest_element(b, 5));
    printf("The average is %f\n", average(b, 5));
    printf("The number of positive elements is %d", number_of_positive_elements(b, 5));
    return 0;
}
int largest_element(int a[], int n)
{
    int i, m=0;
    for( i=0; i<n; i++)
    if(a[i]>m)
    m=a[i];
    return m;
}
int number_of_positive_elements(int a[], int n)
{
    int i, count=0;
    for ( i=0; i<n; i++)
    if (a[i]>=0)
    count++;
    return count;
}
float average(int a[], int n)
{
    int i;
    float ave, sum=0.0;
    for( i=0; i<n; i++)
    sum +=a[i];
    ave=(sum/ n);
    return ave;
}