#include <stdio.h>
#include <math.h>

int     main(void)
{
  double s_one = 0, s_two = 0;
  double s_tird = 0, p = 0, area = 0;
  
  scanf("%lf %lf %lf", &s_one, &s_two, &s_tird);
  p = (s_one + s_two + s_tird) / 2;
  area = sqrt(p * (p - s_one) * (p - s_two) * (p - s_tird));
  printf("%.2f\n", area);
  
  return (0);
}