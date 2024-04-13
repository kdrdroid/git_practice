#include<stdio.h>
# define FOUR_OUT_THREE 4.0f/3.0f
# define PIE 3.14f
int main(void)
{
    float volume, r;
    printf("Enter radius of a sphere:");
    scanf("%f",&r);
    volume=FOUR_OUT_THREE*PIE*r*r*r;
    printf("volume of sphere in cubic cm:%f \n",volume);
    return 0;
}