//function that calculates the GPA  is supossed to be chaexe9_11.c
#include<stdio.h>

float compute_GPA(char grade[], int n){
    int digit[n], i;
    for(i=0; i<n; i++){
        if(grade[i]=='A')
            digit[i]=4;
        else if (grade[i]=='B')
            digit[i]=3;
        else if (grade[i]=='C')
            digit[i]=2;
        else if (grade[i]=='D')
            digit[i]=1;
        else
            digit[i]=0;
    }
    float sum = 0;
    for(i=0;i<n;i++)
        sum+=digit[i];
    return (sum)/n;
}
int main(void)
{
  int i, n;
  printf("Enter the total number of your exam:");
  scanf("%d", &n);
  
  char letter[n];
  printf("Enter the grade of each exam (ABCD):");
  for(i=0;i<n; i++)
    scanf(" %c", &letter[i]);


   printf("The GPA is %f", compute_GPA(letter, n));
   return 0;
}