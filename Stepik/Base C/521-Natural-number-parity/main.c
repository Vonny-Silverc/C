#include <stdio.h>
#include <math.h>

int   main(void)
{
  int number = 0, result = 0;

  scanf("%d", &number);
  number %= 2;
  (number == 0) ? (result = 1) : (result = -1);
  printf("%d\n", result);
  
  return (0);
}