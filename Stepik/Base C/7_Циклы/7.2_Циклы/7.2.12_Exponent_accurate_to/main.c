#include <stdio.h>

int     main(void)
{
  double  eps = 0, exp = 1, frac = 1, fact = 1;

  scanf("%lf", &eps);
  
  for(int itr = 1; frac >= eps; itr++)
  {
    fact *= itr;
    frac = 1 / fact;
    exp += frac;
  }
  printf("%.8lf", exp);
  
  return (0);
}