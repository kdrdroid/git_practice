# include<stdio.h>

int main(void)
{
    float n, i, j, k, p, q;

    printf("Enter amount of loan:");
    scanf("%f", &n);

    printf("Enter interest:");
    scanf("%f", &i);

    printf("Enter monthly salarly:");
    scanf("%f", &j);

    k=((n+(n*(i/100)))-j);
    printf("Balance remaining after first payment:%f\n", k);

    p=((k+(n*(i/100)))-j);
    printf("Balance remaining after second payment:%f\n", p);

    q=((p+(n*(i/100)))-j);
    printf("Balance remaining after third payment:%f\n", q);
    return 0;









}