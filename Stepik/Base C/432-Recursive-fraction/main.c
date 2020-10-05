#include <stdio.h>

int       main(void)
{
  double  a = 0, b = 0, c = 0, d = 0;
  double  e = 0, f = 0, h = 0, res = 0;

  scanf("%lf %lf %lf %lf %lf %lf %lf", 
  &a, &b, &c, &d, &e, &f, &h);
  res = a / ((b * c) / ((d * e) / (f * h)));
  printf("%.2f\n", res);
  
  return (0);
}