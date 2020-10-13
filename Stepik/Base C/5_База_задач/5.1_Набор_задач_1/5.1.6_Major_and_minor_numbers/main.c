#include <stdio.h>

int   main(void)
{
  double  result_nbr = 0, major_nbr = 0;
  double  first_nbr, second_nbr = 0;
  double  minor_nbr = 0;

  scanf("%lf %lf", &first_nbr, &second_nbr);
  result_nbr = first_nbr / second_nbr;
  minor_nbr = (int)result_nbr % 10;
  major_nbr = result_nbr * 10;
  major_nbr = (int)major_nbr % 10;
  printf("%.0f %.0f\n", minor_nbr, major_nbr);
  
  return (0);
}