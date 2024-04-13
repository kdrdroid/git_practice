#include<stdio.h>

int main(void)
{
    int i, square;
    i=1;
    do
    {
       i++;
        square = i*1;

    } while (square!=(i*i));

   printf("%d", i); 
}