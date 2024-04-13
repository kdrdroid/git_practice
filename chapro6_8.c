//calender
#include<stdio.h>

int main(void)
{
    int begin_day, days_in_month, days_in_week, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    printf("Enter starting dayof the week(1=sun, 7=sat): ");
    scanf("%d", &begin_day);
    
    //print the starting empty day 
    for (i=1; i<begin_day; i++)
        printf("    ");
    //assign begin_day to days in week
    days_in_week=begin_day-1;

    //prints days in month
    for(i=1; i<=days_in_month; i++)
    {
        if(i<10)
            printf(" %d  ", i);
            else
                printf("%d  ", i);
        days_in_week++;
        if(days_in_week==7)
        {
            printf("\n");
            days_in_week=0;
        }
        
        
    }
    
}