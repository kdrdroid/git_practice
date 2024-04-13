#include<stdio.h>
int main(void)
{
  char ch;
  int len;
  printf("Enter a sentence:");
  ch=getchar();
  for (len=0; ch!='\n'&& ch !=' '; len++ )
  printf("The length of sentense is %d characters", len);
  return 0;
}