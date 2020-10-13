#include <stdio.h>

int   main(void) 
{
  double  euler_one = 0;
  double  euler_two = 0;
  double  euler_tir = 0;

  euler_one = 1 + 1 + ((double)1 / 2) + ((double)1 / 6);
  euler_two = 1 + 1 + ((double)1 / 2) + ((double)1 / 6)
   + ((double)1 / 24);
  euler_tir = 1 + 1 + ((double)1 / 2) + ((double)1 / 6)
   + ((double)1 / 24)+ ((double)1 / 120);
  printf("%.5f\n%.5f\n%.5f\n", euler_one, euler_two, euler_tir);
  
  return (0);
}