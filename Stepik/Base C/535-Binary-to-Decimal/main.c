#include <stdio.h>
#include <math.h>

int   main(void)
{
  int binaty_nbr = 0;
  int decimal_nbr = 0;
  int digit = 0;

  scanf("%d", &binaty_nbr);
  
  for(int itr = 0; itr < 4; itr++)
  {
    digit = binaty_nbr % 10;
    digit *= pow(2, itr);
    decimal_nbr += digit;
    binaty_nbr /= 10; 
  }
  
  printf("%d\n", decimal_nbr);
  
  return (0);
}