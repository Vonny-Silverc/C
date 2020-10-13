#include <stdio.h>

int   main(void)
{
  int nbr_min = 0, nbr_max = 0;
  
  scanf("%d %d", &nbr_min, &nbr_max);
  if (nbr_min < 0) nbr_min = 1;
  for (int itr = nbr_min; itr <= nbr_max; itr++)
    printf("%d ", itr);
  
  return (0);
}