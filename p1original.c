#include<stdio.h>
#include<math.h>
void input(float *base,float *height)
{
  printf("enter height:\n");
  scanf("%f",height);
  printf("enter base:\n");
  scanf("%f",base);
}
void  find_area(float base,float height,float *area)
{
  *area=0.5*(base+height);
}
void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
}
