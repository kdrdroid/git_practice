#include<stdio.h>

struct point{
    int x, y;
};
struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
        int height, width;
    } rectangle;
    struct {
        int radius;
    } circle;
    } u;
 } s;
 double area_rect(struct shape p){
        return p.u.rectangle.height*p.u.rectangle.width ;
 }
 int main(void){
    struct shape q;
    double area=area_rect(q);
    

 }