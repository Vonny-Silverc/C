#include <stdio.h>

int   factorial(int);

int   main(void)
{
  int num = 0;
  
  scanf("%d", &num);
  printf("%d\n", num = factorial(num));

  return (0);
}

int   factorial(int num)
{
  int res = 1;

  for (int itr = 1; itr <= num; itr++)
    res *= itr;
  
  return (res);
}