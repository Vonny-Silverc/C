#include <stdio.h>
#include <math.h>

int   main(void)
{ 
  int number = 0, result = 0;

  for(int itr = 0; itr < 4; itr++)
  {
    scanf("%1d", &number);
    result *= 10;
    result += (number + 7) % 10;
  }
  
  printf("%04d", result = result / 100 + result % 100 * 100);
  
  return (0);
}