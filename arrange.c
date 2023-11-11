#include<stdio.h>
int main(void)
{
    int i, n, j, k;
    printf("Enter 4 numbers :");
    scanf("%d%d%d%d", &n, &i, &j, &k);
    printf("%d %d %d %d\n", n, i, j, k);
    if(n>i&&j&&k)
    printf("Largest:%d\n", n);
    else if (i>n&&j&&k)
    printf("Largest:%d\n", i);
    else if (j>n&&i&&k)
    printf("Largest:%d\n", j);
    else if (k>n&&j&&i)
    printf("Largest:%d\n", k);
    else
    printf("repeated or invalid input\n");



    if (n<i&&n<j&&n<k)
    printf("smallest:%d\n", n);
    else if (i<n&&i<j&&i<k)
    printf("smallest:%d\n", i);
    else if (j<n&&j<i&&j<k)
    printf("smallest:%d\n", j);
    else if (k<n&&k<i&&k<j)
        printf("smallest:%d\n", k);
     else
        printf("repeated or invalid input");



}