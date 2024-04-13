# include<stdio.h>

int main(void)
{
    int n, i, j, p, m, k, q, h;
    printf("Enter amount in dollars:");
    scanf("%d", &n);

    i=((n-(n%20))/20.0);
    printf("$20 bills:%d\n", i);

    j=n%20;
    p=((j-(j%10))/10.0);
    printf("$10 bills:%d\n", p);

    m=j%10;
    k=((m-(m%5))/5.0);
    printf("$5 bills:%d\n", k);

    q=m%5;
    h=((q-(q%1))/1.0);
    printf("$1 bills:%d\n", h);
    return 0;
    



    
}
