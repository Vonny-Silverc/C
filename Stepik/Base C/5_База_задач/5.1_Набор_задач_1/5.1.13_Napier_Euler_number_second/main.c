#include <stdio.h>
#include <math.h>

int     main(void)
{
  double e1 = 0, e3 = 0, x = 0;

  scanf("%lf", &x);
  e1 = exp(x);
  e3 = 1 + x + (pow(x, 2) / 2) + (pow(x, 3) / 6) + 
   (pow(x, 4) / 24) + (pow(x, 5) / 120);
  printf("%.6f\n%.6f\n", e1, e3);
  
  return (0);
 }