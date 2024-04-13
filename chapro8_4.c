#include<stdio.h>
#define SIZE ((int)(sizeof(a)/sizeof(a[0])))

int main(void)
{
    int a[]={0,1,2,3,4,5,6,7,8,9};
    printf("Reverse:");
    for(int i=SIZE-1; i>=0; i--)
        printf(" %d", a[i]);
}