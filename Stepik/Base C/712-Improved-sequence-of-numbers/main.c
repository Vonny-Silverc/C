#include <stdio.h>

int   main(void)
{
    
  int nbr_min;
  int nbr_max;
  
  nbr_min = 0;
  nbr_max = 0;
  scanf("%d %d", &nbr_min, &nbr_max);
  nbr_min > 0 ? (nbr_min += 0) : (nbr_min = 1);
  for (nbr_min = nbr_min; nbr_min <= nbr_max; nbr_min++)
    printf("%d ", nbr_min);
  return (0);
}