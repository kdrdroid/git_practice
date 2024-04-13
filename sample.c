#include <stdio.h>

int main(void)
{
    int h, w, l, vol;

    printf("Enter height:");
    scanf("%d", &h);

    printf("Enter width:");
    scanf("%d", &w);

    printf("Enter length:");
    scanf("%d", &l);

    vol=h*w*l;
    printf("Volume: %d*%d*%d\n", h, w, l);
    printf("Volume: %d\n", vol);
    return 0;

}