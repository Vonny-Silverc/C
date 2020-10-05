#include <stdio.h>
#include <math.h>

int       main(void)
{
  int     radius = 0, height = 0;
  double  pi = 3.14159265358979323846;
  double  сylinder_vol = 0, сone_vol = 0;

  scanf("%d %d", &radius, &height);
  сylinder_vol = height * pi * pow(radius, 2);
  сone_vol = (height * pi) / 3 * pow(radius, 2);
  printf("%.2f %.2f\n", сylinder_vol, сone_vol);
  
  return (0);
}