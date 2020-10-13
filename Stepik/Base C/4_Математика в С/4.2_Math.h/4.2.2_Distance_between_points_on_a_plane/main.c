#include <stdio.h>
#include <math.h>

int       main(void)
{
  double  x_one = 0, y_one = 0;
  double  x_two = 0, y_two = 0;
  double  x = 0, y = 0;
  double  resalt = 0;
  
  scanf("%lf %lf %lf %lf", &x_one, &y_one, &x_two, &y_two);
  x = pow((x_one - x_two), 2);
  y = pow((y_one - y_two), 2);
  printf("%0.2f\n", resalt = sqrt(x + y));
  
  return (0);
}