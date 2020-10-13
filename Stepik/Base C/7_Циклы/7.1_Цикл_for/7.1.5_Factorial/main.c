#include <stdio.h>

int   main(void)
{
  int result = 1, number = 0;
    
  scanf("%d", &number);
  if (number < 0) number = 1;
  for (int itr = 1; itr <= number; itr++)
    result *= itr;
  printf("%d\n", result);
  
  return (0);
}