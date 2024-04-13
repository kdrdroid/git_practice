#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char*duplicate(char*str)
{
    char* p = calloc(strlen(str)+1, 1);
    if (p==NULL){
        printf("Error: calloc returns no space");
        return NULL;
    }
    strcpy(p, str);
    return p;
}
int main (void)
{
    char str[30];
    printf("write a word: ");
    gets(str);
    printf("u have wrote: %s", duplicate(str));
}