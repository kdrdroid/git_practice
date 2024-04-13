# include<stdio.h>

int main(void)
{
    int n, mm, dd, yyyy;
    float i;
    printf("Enter item number:");
    scanf("%d", &n);
    printf("Enter unit price:");
    scanf("%f", &i);
    printf("Enter purchase date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    
    printf("Item\tUnit\t    Purchase\n");
    printf("    \tPrice\t    Date\n");
    printf("%d\t$%8.2f\t\b\b\b\b%d/%d/%d\n", n, i, mm, dd, yyyy);
    return 0;
}