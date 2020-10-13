#include <stdio.h>

int   main(void)
{ 
  int nbr_high = 0;
  int nbr_position = 0;
  int nbr_togo = 0;

  scanf("%d %d %d", &nbr_high, &nbr_togo, &nbr_position);
  nbr_position = (nbr_togo + nbr_position) % nbr_high;
  
  printf("%d\n", nbr_position);
  
  return (0);
}