#include <stdio.h>
#include <math.h>

int   main(void)
{
  int nbr_1 = 0, nbr_2 = 0, nbr_3 = 0, nbr_4 = 0;
  
  scanf("%d %d %d %d", &nbr_1, &nbr_2, &nbr_3, &nbr_4);
  
  nbr_1 = nbr_1 * 1000 + nbr_2 * 100 + nbr_3 * 10 + nbr_4;
  if (nbr_1 == 1024) printf("open");
  else printf("close");
  
  return (0);
}