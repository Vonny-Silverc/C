#include <stdio.h>

int   main(void)
{
  int number = 0, result = 0;
  
  scanf("%d", &number);
  while (number)
  {
    result += (number % 10);
    number /= 10;
  }
  printf("%d\n", result);
  
  return (0);
}  