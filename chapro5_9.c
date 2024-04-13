#include<stdio.h>
int main(void)
{
    int i, j, k, i1, j1, k1;
    printf("Enter the first date(mm/dd/yy) :");
    scanf("%d/%d/%d", &i, &j, &k);
    printf("Enter the sencond date(mm/dd/yy) :");
    scanf("%d/%d/%d", &i1, &j1, &k1);
    
    if (k!=k1){
        if (k<k1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", i, j, k, i1, j1, k1);
         else
         printf("%d/%d/%d is earlier than %d/%d/%d\n", i1, j1, k1, i, j, k);

    }
    else if (i!=i1){
        if (i<i1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", i, j, k, i1, j1, k1);
        else
        printf("%d/%d/%d is earlier than %d/%d/%d\n", i1, j1, k1, i, j, k);

    }
    else if (j!=j1){
        if (j<j1)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", i, j, k, i1, j1, k1);
        else
        printf("%d/%d/%d is earlier than %d/%d/%d\n", i1, j1, k1, i, j, k);

    }
    else
    printf("invalid input\n");

}