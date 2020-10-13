#include <stdio.h>
#include <math.h>

int     main(void)
{
  double t = 5570;
  double l = 0;
  double k = 0;
  double n0 = 75;
  double n = 5;
  double e = 0;

  scanf("%lf", &k);
  l = log(2) / t;
  l *= -1;
  k *= l;
  e = exp(k);
  n = n0 * e;
  printf("%.2f\n", n);
  
  return (0);
}