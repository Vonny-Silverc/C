#include <stdio.h>

int   main(void)
{
  int nbr_1 = 0, nbr_2 = 0, nbr_3 = 0, itr = 0;

  scanf("%d %d %d", &nbr_1, &nbr_2, &nbr_3);
  if (nbr_1 >= 0) itr++;
  if (nbr_2 >= 0) itr++;
  if (nbr_3 >= 0) itr++;
  printf("%d", itr);
  
  return (0);
}