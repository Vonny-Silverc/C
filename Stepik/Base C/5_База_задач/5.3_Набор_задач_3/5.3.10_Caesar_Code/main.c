#include <stdio.h>
#include <math.h>

int     main(void)
{    
  int   number_high = 26;
  int   numb_one = 0;
  int   numb_two = 0;
  int   numb_three = 0;
  int   numb_four = 0;
  int   numberK = 0;

  scanf("%d %d %d %d %d", &numberK, 
    &numb_one, &numb_two, &numb_three, &numb_four);
  numb_one = (numb_one + numberK) % number_high;
  numb_two = (numb_two + numberK) % number_high;
  numb_three = (numb_three + numberK) % number_high;
  numb_four = (numb_four + numberK) % number_high;
  
  printf("%d %d %d %d\n", numb_one,
    numb_two, numb_three, numb_four);
  
  return (0);
}