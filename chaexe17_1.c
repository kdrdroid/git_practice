#include<stdio.h>
#include<stdlib.h>

void*my_malloc(int n)
{
    void*p=malloc(n);
    if(p==NULL)
        {
            printf("Error:malloc failed to provide space");
            exit(EXIT_FAILURE);
        }
    return p;
}
int main(void)
{
    int i=5, *p=my_malloc(sizeof(int));
    p=&i;
    printf("%d", *p);
    
    printf("%d", *p);
}