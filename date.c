#include<stdio.h>

int main(void)
{
int day, month, year;

printf("Enter date (mm/dd/yy):");
scanf("%d /%d /%d", &month, &day, &year);

printf("Dated this %d", day);
switch(day){
    case 1: case 11: case 31:
    printf("st"); break;
    case 2: case 22: case 12:
    printf("nd"); break;
    case 3: case 23:
    printf("st"); break;
    default : printf("th"); break;

}
printf(" day of ", month);
switch (month){
    case 1: printf("January"); break;
    case 2: printf("February"); break;
    case 3: printf("March"); break;
    case 4: printf("May"); break;
    case 5: printf("April"); break;
    case 6: printf("June"); break;
    case 7: printf("Jully"); break;
    case 8: printf("August"); break;
    case 9: printf("September"); break;
    case 10: printf("October");  break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;    
}
printf(", 20%.2d.\n", year);
return 0;

}