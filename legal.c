# include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", 0<n&&n<=10);
    if (0<n&&n<=10)
    {
       printf("n is between 1 and 10\n");

    }
    else
       printf("n is not between 1 and 10\n");
    
}