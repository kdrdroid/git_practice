#include<stdio.h>
#define NELEMS(a) (sizeof(a)/sizeof(a[0]))

int main(void)
{
    int k[] ={1,2,3,4,5,6,7,8};
    int n=NELEMS(k);
    printf("%d", n);
}