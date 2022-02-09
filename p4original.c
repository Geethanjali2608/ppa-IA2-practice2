#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter no. of inputs:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter any number:\n");
    scanf("%d",&a[n]);
  }
}
int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  int composite;
  for(int i=2;i<a[n]-1;i++)
  {
    if(n%i==0)
    {
      int x,b[x];
    }
  }
  return sum;
}  
void output(int sum)
{
  int n,a[n];
  for(int i=0;i<n;i++)
  {
  printf("%d+",a[n]);
  }
}
/*
int is_composite(int n)
{
  int composite;
  for(int i=2;i<n-1;i++)
  {
    if(n%i==0)
    {
      composite=1;
      break;
      return 1;
    }
    else
    {
     composite=2;
     break;
     return 2;
    }
  }
  return composite;
}
void output(int n,int composite)
{
  if(composite==1)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("%d is a prime number\n",n);
  }
}*/
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum_composite_numbers(n,a);
  output(sum);
  return 0;
}




/*int sum_composite_numbers(int n,int a[n])
{
  int sum;
  for(int i=2;i<a[n];i++)
  {
    if(a[n]%i==0)
    {
      break;
      sum=sum+a[n];
    }
    else
    {
      break;
      sum=sum+0;
    }
  }
  return sum;*/