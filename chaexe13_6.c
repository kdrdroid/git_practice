#include<stdio.h>
#include<string.h>

void modify_string(char a[], int n)
{
  int i;
  for (i=0; i<n; i++)
  if (a[i]=='f'&& a[i+1]=='o' && a[i+2]=='o')
  {
    for(int j=i ;j<=(i+2); j++)
    a[j]='x';
  }
  return;
}
int main(void)
{
    char b[]="food fool";
    int len;
    len = (strlen(b)+1);
    modify_string(b, len);
    printf("%d\n", len);
    printf("%s",b);

}