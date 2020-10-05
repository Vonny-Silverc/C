#include <stdio.h>

int   factorial(int);

int   main(void)
{
  int number = 0;
  
  scanf("%d", &number);
  printf("%d\n", number = factorial(number));

  return (0);
}

int   factorial(int num)
{
  int res = 1;

  for (int itr = 1; itr <= num; itr++)
    res *= itr;
  
  return (res);
}