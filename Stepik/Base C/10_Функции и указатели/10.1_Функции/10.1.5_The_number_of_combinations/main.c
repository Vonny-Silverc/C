#include <stdio.h>

int   factorial(int fact)
{
  int fact_res = 1;

  for (int itr = 1; itr <= fact; itr++)
    fact_res *= itr;
  
  return (fact_res); 
}

int   combin(int elem, int komb)
{
  int diff = elem - komb, res = 0;

  elem = factorial(elem);
  komb = factorial(komb);
  diff = factorial(diff);

  res = elem / (komb * diff);

  return (res);
}

int   main(void)
{
  int elem = 0, komb = 0;
  
  scanf("%d %d", &elem, &komb);
  printf("%d\n", combin(elem, komb));

  return (0);
}