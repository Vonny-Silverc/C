#include <stdio.h>

int   main(void)
{
  int result;
  int number;
    
  result = 1;
  number = 0;
  scanf("%d", &number);
  number > 0 ? (number += 0) : (number = 1);
  for (int i = 1; i <= number; i++)
    result *= i;
  printf("%d\n", result);
  return (0);
}