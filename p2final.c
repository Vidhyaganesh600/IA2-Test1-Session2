#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the side length\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 1;
  }
  else
    {
      return -1;
    }
}
void output(int a,int b,int c,int isscalene)
{
   if(a!=b && b!=c && a!=c)
   {
     printf("triangle is scalene\n");
   }
  else
    {
      printf("triangle is not scalene\n");
    }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}








