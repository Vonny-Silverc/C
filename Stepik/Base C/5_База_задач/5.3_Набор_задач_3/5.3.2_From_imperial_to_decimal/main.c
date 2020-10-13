#include <stdio.h>

int   main(void)
{
  int     pound_one = 0, inch = 0;
  double  pound_two = 0, result = 0;
  double  mill = 0;

  scanf("%d %d", &pound_one, &inch);
  
  pound_two = pound_one;
  pound_two *= 12;
  mill = (pound_two + inch) * 254 / 10;
  result = mill / 1000;
  
  printf("%d\'%d\" = %.2fm.\n", 
    pound_one, inch, result);
  
  return(0);
}