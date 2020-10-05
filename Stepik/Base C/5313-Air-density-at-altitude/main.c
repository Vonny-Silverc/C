#include <stdio.h>
#include <math.h>

int     main(void)
{
  double  p = 0;
  double  p0 = 1.29;
  double  e = 0;
  double  h = 0;
  double  z = 1.25;
  int     l = -4;

  scanf("%lf", &h);
  h *= -1;
  z = z * pow(10, l);
  h *= z;
  e = exp(h);
  
  printf("%.2f\n", p = p0 * e);
  
  return (0);
}