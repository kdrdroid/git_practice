#include<stdio.h>

int days_of_yr(int month, int days_of_month);
int main(void)
{
    int month, days_of_month, yr, total_days;
    printf("Enter the date(dd/mm/yyyy):\n");
    scanf("%d/%d/%d", &days_of_month, &month, &yr);
    total_days=days_of_yr(month, days_of_month);
    printf("%d days so far moved in %d", total_days, yr);
}
int days_of_yr(int month, int days_of_month)
{
    return ((month-1)*30) + days_of_month ;
}