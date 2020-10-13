#include <stdio.h>

void  sum_digits(int *x)
{
  int dif = 0, sum = 0;
  
  while(*x > 0)
  {
    dif= *x % 10;
    sum += dif;
    *x /= 10;
  }
  *x = sum;
}

int   main(void)
{
  int num = 0;

  scanf("%d", &num);
  sum_digits(&num);
  printf("num = %d\n", num);

  return (0);
}