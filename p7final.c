#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle triangle1;
  printf("enter the values for members of the struct\n");
  scanf("%f%f",&triangle1.base,&triangle1.altitude);
  return triangle1;
}
void find_area(Triangle *t)
{
  t->area=0.5* t->base* t->altitude;
}
void output(Triangle t)
{
  printf("The area of triangle with base %f and altitude %f is %f\n",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}