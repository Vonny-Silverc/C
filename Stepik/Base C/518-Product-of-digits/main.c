#include <stdio.h>

int   main(void)
{
  int     orig_nbr = 0;
  int     digt_nbr = 0;
  int     digt_itr = 1;
  int     digt_evn = 1;
  int     digt_odd = 1;
  double  result = 0;

  scanf("%d", &orig_nbr);
  while(orig_nbr)
  {
    digt_nbr = orig_nbr % 10;
    if (digt_itr % 2 == 0) {digt_evn *= digt_nbr; digt_itr++;}
    else {digt_odd *= digt_nbr; digt_itr++;}
    orig_nbr /= 10;
  }
  printf("%.2f", result = (double)digt_evn / digt_odd);
  
  return (0);
}