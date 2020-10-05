#include <stdio.h>

int   main(void)
{
  double  pound = 0;

  scanf("%lf", &pound);
  pound *= 454;
  printf("%.2f\n", pound /= 1000);
  
  return (0);
}