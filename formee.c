#include <stdio.h>

int main(void)
{
    float i;
    i=8364.01;
    printf("%14.1e\n", i);
    printf("%-20.6e\n", i);
    printf("%17.3f\n", i);
    return 0;
}