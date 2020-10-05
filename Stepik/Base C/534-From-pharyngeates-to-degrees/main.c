#include <stdio.h>

int   main(void)
{
  double t_pharyngeates = 0;
  double t_celsius = 0;
  double fraction = 0;

  scanf("%lf", &t_pharyngeates);
  fraction = (double)5 / 9;
  t_celsius = fraction * (t_pharyngeates - 32);
  printf("%.2f\n", t_celsius);
  
  return (0);
}