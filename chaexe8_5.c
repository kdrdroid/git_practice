//fibonacci
#include<stdio.h>
#define N 40
int main(void)
{
    int i, fib_number[N];
    fib_number[0]=0;
    fib_number[1]=1;
    int a = 0, b = 1;
    for (i=2; i<N; i++){
        //let the current number be b and the former number be a
        fib_number[i]= a+b;
        a = b;
        b = fib_number[i];
        
    }
    for (i=0;i<N;i++)
    printf("%d\n", fib_number[i]);
}