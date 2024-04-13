#include<stdio.h>
void swap(int a, int b)
{
  int temp;
  temp=*a;
  *b=*a;
  *b=temp;
}
int smallest(int *a, int n)
{
  int i, min=*a;
  for(i=0; i<n; i++)
  if(min>a[i])
  min=a[i];
  return i;
}
int main(void)
{
  int i, j=0, n=10, b[]={3,10,6,9,1,2,5,7,8,4};
  while(swap(&b[j], &b[i])==1){
  i=smallest(&b[j], n);
  swap(&b[j], &b[i]);
   j++;
   n--;
  }
  for (int p=0; p<n; p++)
  printf("%d", b[p]);
}