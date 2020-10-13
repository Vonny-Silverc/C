#include <stdio.h>

int   main(void)
{
  int digit_cap = 0, number = 0, result = 1;

  scanf("%d %d", &digit_cap, &number);
  
  while(digit_cap != 0)
  {
    result *= number % 10;
    number /= 10;
    digit_cap--;
  }
  
  printf("%d\n", result);
  
  return (0);
}