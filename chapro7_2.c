#include<stdio.h>

int main(void)
{
    int i=1, count=0;
    char ch, a='\n';
    for(;;){
      printf("Square of %d is %ld", i, i*i);
      count++;
      if (count==25){
        printf("press Enter to continue...");
        ch=getchar();
        if (ch == a){
            count=0;
            continue;
        }
      }
      i++;
    }

}