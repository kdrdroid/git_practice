#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter numerical grade :");
    scanf("%d", &n);
    n=n/10;
    switch (n)
    {
    case 10: printf(" letter grade: A"); break;
    case 9: printf(" letter grade: A"); break;
    case 8: printf(" letter grade: B"); break;
    case 7: printf(" letter grade: C"); break;
    case 6: printf(" letter grade: D"); break;
    case 5: case 4: case 3: case 2: case 1: case 0:
    printf(" letter grade : F"); break; 
    
    default: printf("Error invalid input");
        break;
    }
    
}