// remaining balance
#include<stdio.h>

int main(void)
{
 float loan, payements, rate, remain_balance;
 printf("Enter the amount of loan: ");
 scanf("%f", &loan);
  
printf("Enter interest rate: ");
scanf("%f", &rate);

printf("Enter monthly payment: ");
scanf("%f", &payements);

// do calculations for remaining balance of 1st, 2nd, and third month
float s_i =((loan-payements)*(rate/(100*12)));
remain_balance=(loan-payements)+s_i;
printf("Balance remianing after the first payment :%.2f\n", remain_balance);

remain_balance=(remain_balance-payements)+((remain_balance-payements)*(rate/(100*12)));
printf("Balance remaining after the second payment :%.2f\n", remain_balance);

remain_balance=(remain_balance-payements)+((remain_balance-payements)*(rate/(100*12)));
printf("Balance remaining after the third payment :%.2f\n", remain_balance);




}