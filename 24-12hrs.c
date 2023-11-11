#include<stdio.h>
int main(void)
{
    int hr, min;
    printf("Enter a 24 - hr time:");
    scanf("%d:%d", &hr, &min);
    if (hr>12&&hr<24){
        hr=hr-12;
        printf("Equivalent 12-hour time : %d:%d PM", hr, min);
    
    }
    else if (hr>0&&hr<12)
      printf("Equivalent 12-hour time : %d:%d AM", hr, min);
    else if (hr==0)
      printf("Equivalent 12-hour time : 12:%d Am", min);
    else if (hr==12)
      printf("Equivalent 12-hour time : 12:%d PM", min);
      else
       printf("Error in hours entered\n");
}