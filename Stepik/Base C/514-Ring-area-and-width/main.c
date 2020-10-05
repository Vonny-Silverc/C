#include <stdio.h>
#include <math.h>

int   main(void)
{
  int         inner_r = 0, outer_r = 0, ring_width = 0;
  double      ring_area = 0;
  long double pi = 3.14159265358979323846;

  scanf("%d %d", &inner_r, &outer_r);
  ring_width  = outer_r - inner_r;
  ring_area = (long double)pi *
   (pow(outer_r, 2) - pow(inner_r, 2));
  ring_area *= 100;
  printf("%d %.2f", ring_width, ring_area);
  
  return (0);
}