#include <stdio.h>
#include <math.h>

int   main(void)
{
  int     glas_water = 0;
  double  drop_water = 0, gram_water = 0;
  double  molecul_water = 0;

  scanf("%d", &glas_water);
  gram_water = glas_water * 249.5;
  drop_water = gram_water / 0.05;
  molecul_water = gram_water / 3e-23;
  printf("%.0f %.3e\n", drop_water, molecul_water);
  
  return(0);
}