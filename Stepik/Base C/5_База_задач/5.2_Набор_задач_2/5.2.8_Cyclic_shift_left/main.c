#include <stdio.h>

int   main(void)
{
  int number = 0, result = 0;

  scanf("%d", &number);
  result = number % 100;
  number /= 100;
  result *= 10;
  printf("%d\n", result += number);
  
  return (0);
}