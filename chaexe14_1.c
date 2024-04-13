#include<stdio.h>
#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(n) ((n)%4)
#define PRODUCT 
int main(void)
{
   int i=6, j=5;

    #if PRODUCT
     
    int a = 3, b =11;
    printf("The cube of %d is %d\n", a, CUBE(a));
    printf("remainder is %d\n", REMAINDER(b));
    #endif
    return 0;
}