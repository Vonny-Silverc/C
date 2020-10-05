#include <stdio.h>
#include <math.h>

int   main(void)
{
  int number = 0;
  int result = 0;

  for (int itr = 0; itr < 5; itr++)
  {
    scanf("%d", &number);
    number != 0 ? (result += pow(number, 2)) 
      : (number = 0);
  }
  result = (int)result + 0;
  printf("%d", result);
  
  return (0);
}