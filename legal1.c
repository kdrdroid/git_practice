# include<stdio.h>
int main(void)
{
    int n;
    printf("Enter value of n");
    scanf("%d", &n);

    printf("%d\n", n==1-10);
    if (n==1-10)
    {
        printf("n is between 1 and 10\n");

    }
    else
       printf("n is not between 1 and 10\n");
    
}