#include <stdio.h>

int   main(void) 
{
  int nbr_a = 0, nbr_b = 0;
  
  scanf("%d %d", &nbr_a, &nbr_b);
  for (nbr_b = nbr_b; nbr_b >= nbr_a; nbr_b--)
    printf("%d ", nbr_b);
  
  return (0);
}