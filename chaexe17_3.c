#include<stdio.h>
#include<stdlib.h>

int* create_array(int n, int initial_value)
{
    int* p = calloc(n, sizeof(int));
    if(p==NULL){
        return NULL;
        printf("error");
    }
    for(int i=0; i<n; i++)
        p[i]=initial_value;
    return p;
}
int main(void)
{
    int i, *q;
    q=create_array(5, 2);
    for(i=0; i<5; i++)
        printf("%d\n", q[i]);
}