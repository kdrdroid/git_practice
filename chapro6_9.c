#include<stdio.h>

int main(void)
{
  float loan, payments, rate, remain_balance;
  int number_payments;
 printf("Enter the amount of loan: ");
 scanf("%f", &loan);
printf("Enter interest rate: ");
scanf("%f", &rate);
printf("Enter number of payments : ");
scanf("%d", &number_payments);
printf("Enter monthly payment: ");
scanf("%f", &payments);
printf("\n");


for (int i=1; i<=number_payments; i++)
{
remain_balance=((loan-payments)+((loan-payments)*(rate/(100*12))));
switch (i){
    case 1: printf("Balance after first payment :%.2f\n", remain_balance);
            break;
    case 2: printf("Balance after second payment :%.2f\n", remain_balance);
            break;
    case 3: printf("Balance after third payment :%.2f\n", remain_balance);
            break;
    default: printf("Balance after %dTH payment :%.2f\n", i, remain_balance);
           break;
    
}
loan=remain_balance;
}
return 0;
}