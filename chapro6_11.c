#include<stdio.h>

int main(void)
{
    int n, fact, i, j;
    float constant, sum_fraction;
    printf("for constant k=1+1/1!+1/2!+...+1/n!, so enter the n: ");
    scanf("%d", &n);
// loop that moves from 1 to n
    for( i=1; i<=n; i++)
    {
        for (j=i, fact=1; j>=1; j--){//calculates a fact of individual fact
            fact*=j;
        }
        sum_fraction +=(1/(float)fact);// suming up individual reciprecol of facts
    }
    constant = (1+sum_fraction);//getting the value of constant
    printf("the value of k is %f", constant);

}