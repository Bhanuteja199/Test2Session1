#include <stdio.h>
int input_n()
{
  int n;
  printf("enter n value\n:");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i,prime;
  for(i=2;i<=n;i++)
    {
      if (n==0 && n==1)
      return 1;
      else if
      (n%i ==0)
      return 0;
      else
      return -1;
    }
return prime;
  }
void output(int n,int prime)
{
  if(prime==0)
  {
    printf("entered number is not prime\n");
  }
  else 
    {
      printf("entered number is prime\n");
    }
}
int main()
{
  int n,d;
  n=input_n();
  d=is_prime(n);
  output(n,d);
  return 0;
}