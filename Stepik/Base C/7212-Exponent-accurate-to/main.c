#include <stdio.h>

int   main(void)
{
  double  eps;
  double  exp;
  double  frac;
  double  fact;

  eps   = 0.00;
  exp   = 1.00;
  frac  = 1.00;
  fact  = 1.00;
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