#include<stdio.h>
#define N 10

struct part{
    int numb;
    char name[N];
    int on_hand;
};
void print_part(struct part *p)
{
    printf("part number: %d\n", p->numb);
    printf("Quantinty on hand: %d\n", p->on_hand);
    printf("part name: %s\n", p->name);
}
int main(void)
{
    struct part part1 = { 123, "spanda", 234};
    print_part(&part1);
    
}