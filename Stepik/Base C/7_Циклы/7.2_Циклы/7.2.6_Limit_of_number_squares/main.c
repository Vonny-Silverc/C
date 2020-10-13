#include <stdio.h>
#include <math.h>

int   main(void)
{
  int number = 0, square = 0, itr = 1;
  
  scanf("%d", &number);
  while (pow(itr, 2) <= number)
  {
    printf("%d ", square = pow(itr, 2));
    itr++;
  }
  
  return (0);
}