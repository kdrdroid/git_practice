#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    // getting the number
    long n;
    printf("Enter the number:");
    scanf("%ld", &n);
    //let k be the number that is divided to get number of digits in n
    long k=n;

    //the number of digits in n
    int number_of_digits;
    for (number_of_digits=0; k>0 ; number_of_digits++)
    {
        k/=10;
    }

    //array of digits of n
    int array_digits[number_of_digits];
    //get digits from n and i will keep track of position of the digit stored 
    int i=0;
    while(n>0){
     int digit = n%10;
     array_digits[i++]=digit;
     n/=10;
    }
    //print digits
    printf("Digits:     ");
    for(int i=0; i<10; i++)
        printf(" %d", i);
    printf("\n");
    //print occurences
    printf("Occurrences:");
    //loop that prints occurrences
    for(int i=0, count=0; i<10; i++){
        for(int m=0; m<=number_of_digits ; m++){
            if(i==array_digits[m])
                count++;
        }
        printf(" %d",count);
        count=0;//reset count to zero
    }             
    return 0;
}