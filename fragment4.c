#include<stdio.h>

int main (void)
{
    int i, j, k;
    i=2; j=3;
    k=i*j==6;
    printf("%d\n", k);

    i=5; j=10; k=1;
    printf("%d\n", k > i < j); 

    i=3; j=2; k=1;
    printf("%d\n", i<j==j<k);

    i=3; j=4; k=5;
    printf("%d\n", i%j+i<k);

    i=10; j=5;
    printf("%d\n",!i<j);

    i=2; j=1; 
    printf("%d\n", !!i+!j);
    printf("No.2\n");

    i=3; j=4; k=5;
    printf("%d\n", i<j||++j<k);
    printf("%d %d %d\n", i, j, k);

    i=5; j=0; k=-5;
    printf("%d\n", i&&j||k);

    printf("No.3\n");

    i=7; j=8; k=9;
    printf("b: %d\n", i-7&&j++<k);
    printf("%d %d %d\n", i, j, k);
    printf("c: %d\n", (i=j)||(j=k));
    printf("%d %d %d\n", i, j, k);

    i=1; j=1; k=1;
    printf("d: %d\n", ++i|| ++j && ++k);
    printf("%d %d %d", i, j, k);
    


    
    return 0;
}