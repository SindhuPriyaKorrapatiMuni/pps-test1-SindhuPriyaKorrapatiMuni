#include<stdio.h>
int input();
int cmp(int a,int b,int c);
void output(int a,int b,int c);
int main()
{
  int a,b,c;
  printf("enter three numbers\n");
  a=input();
  b=input();
  c=input();
  cmp(a,b,c);
  return 0;
}
int input()
{
  int a;
  scanf("%d" ,&a);
  return a ;
}
int cmp(int a,int b,int c)
{
  if ((a>b)&&(a>c))
  return a;
  if ((b>a)&&(b>c))
  return b;
  else
  return c; 
}
