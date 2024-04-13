// show repeated digitis in the number
#include<stdio.h>
#include<stdbool.h>


int main(void)
{
    bool digit_seen[10]={false};
    //the posible times different digits can be repeated in long is five
    int repeated[5]={0};

 long numb;
 int i=0;
 printf("Enterthe number");
 scanf("%ld", &numb);

 while (numb > 0)
 {
   int digit= numb % 10;
   if(digit_seen[digit]){
    // store repeated digits in repeated array and i will update the current location
    repeated[i]=digit;
    i++;
   }
   digit_seen[digit]=true;
   numb/=10;
 }
 if (repeated[0]){
    printf("repeated digits is or are :");
    int i;
    for(i=0; i<5; i++){
    if(repeated[i] > 0)
    printf(" %d", repeated[i]);

    }
 }
    else
      printf("no repeated digits in a number");
      return 0;
    
 }
 
