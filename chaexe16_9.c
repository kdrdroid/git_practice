#include<stdio.h>

struct color {
    int red;
    int green;
    int blue;
};
struct color make_color(int red, int green, int blue){
   struct color temp;
   if (red<0|| green<0|| blue<0){
       temp.red=0;
       return temp;
   }
   if (red>255)
    temp.red=255;
    else
        temp.red=red;
    if(green>255)
        temp.green=255;
        else
            temp.green=green;
    if(blue>255)
        temp.blue=255;
        else
            temp.blue=blue;
    return temp;
}
int main(void){
    struct color demo;
    demo=make_color(500,500,100);
    printf("red =%d, green= %d, blue=%d", demo.red, demo.green, demo.blue);
}