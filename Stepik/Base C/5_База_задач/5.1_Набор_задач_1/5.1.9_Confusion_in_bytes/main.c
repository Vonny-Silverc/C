#include <stdio.h>
#include <math.h>
# define DEC_GIG pow(10,9)
# define BIN_GIG pow(2,30)

int   main(void)
{
  long int  orig_value = 0;
  long int  difference = 0;

  scanf("%ld", &orig_value);
  printf("%ld", difference = orig_value * (BIN_GIG - DEC_GIG));
  
  return (0);
}