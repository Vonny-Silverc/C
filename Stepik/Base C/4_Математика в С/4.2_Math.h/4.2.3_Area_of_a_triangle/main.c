#include <stdio.h>
#include <math.h>

int       main(void)
{
  double  side_one = 0, side_two = 0;
  double  angl = 0, area = 0;
  double  pi = 3.141593;
  double  angl_rad = 0;

  scanf("%lf %lf %lf", &side_one, &side_two, &angl);
  angl_rad = (angl / 180) * pi;
  area = 0.5 * side_one * side_two * sin(angl_rad);
  printf("%.2f\n", area);
  
  return (0);
}