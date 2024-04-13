#include<stdio.h>
int main(void)
{
    int hr, min, n;
    printf("Enter a 24-hour time :");
    scanf("%d:%d", &hr, &min);
    n=(hr*60)+min;
    if (n<=480)
      printf("closest departure time is 8:00 a.m. ,");
    else if (n>=585)
      printf("closest departure time is 9:45 a.m. ,");
    else if (n>=679)
      printf("closest departure time is 11:19 a.m. ,");
    else if (n>=767)
      printf("closest departure time is 12:47 p.m. ,");
    else if (n>=840)
      printf("closest departure time is 2:00 p.m. ,");
    else if (n>=945)
      printf("closest departure time is 3:45 p.m. ,");
    else if (n>=1140)
      printf("closest departure time is 7:00 p.m. ,");
    else if (n>=1305)
       printf("closest departure time is 9:45 p.m. ,");
      else
        printf("Invalid input, ");
    


    if (n<=616)
     printf(" arriving at 10:16 a.m. ,");
    else if (n>=712)
     printf(" arriving at 11:52 a.m. ,");
    else if (n>=811)
     printf(" arriving at 1:31 p.m. ,");
    else if (n>=900)
     printf(" arriving at 3:00 p.m. ,");
    else if (n>=968)
     printf(" arriving at 4:08 p.m. ,");
    else if (n>=1075)
     printf(" arriving at 5:55 p.m. ,");
    else if (n>=1280)
     printf(" arriving at 9:20 p.m. ,");
    else if (n>=1438)
     printf(" arriving at 11:58 p.m. ,");
     else
      printf("Invalid input");
     

      

}