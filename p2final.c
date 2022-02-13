#include<stdio.h>
int input_side()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && c!=a)
  {
   return 0;
  }
  else 
  {
    printf("triangle is not scalene");
    return c;
  }
}
void output(int a, int b,int c,int isscalene)
{
  if(a!=b && b!=c && c!=a)
  {
  printf("%d!=%d!=%d  is: scalene\n",a,b,c);
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}