#include <stdio.h>
#include <math.h>

int   main(void)
{
  int exp_nbr = 0;
  int decimal_nbr = 0;
  int digit = 0;
  int exponent = 0;

  scanf("%d %d", &exponent, &exp_nbr);
  
  for(int itr = 0; itr < 4; itr++)
  {
    digit = exp_nbr % 10;
    digit *= pow(exponent, itr);
    decimal_nbr += digit;
    exp_nbr /= 10; 
  }
  
  printf("%d\n", decimal_nbr);
  
  return (0);
}