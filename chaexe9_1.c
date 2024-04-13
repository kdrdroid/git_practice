#include<stdio.h>

double triangle_area(double base, double height)
{
    double product;
    product =base*height;
    return product / 2;
}
int main(void)
{
    double base , height, m;
    printf("Enter the height and base of the triangle respectively;\n");
    scanf("%d %d", &base, &height);
    printf("%d", base);
    printf("%d\n", height);
    /*
    m= triangle_area(base , height);

    printf("The area of the triangle is %d", m );
*/

}