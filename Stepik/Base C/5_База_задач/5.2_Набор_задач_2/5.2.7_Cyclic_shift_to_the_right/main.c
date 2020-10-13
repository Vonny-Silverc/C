#include <stdio.h>

int   main(void)
{
  int number = 0, result = 0;

  scanf("%d", &number);
  result = number % 10;
  number /= 10;
  result *= 100;
  result += number;
  printf("%d\n", result);
  
  return (0);
}