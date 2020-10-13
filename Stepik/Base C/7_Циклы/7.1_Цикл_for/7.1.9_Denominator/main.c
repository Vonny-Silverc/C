#include <stdio.h>

int   main(void)
{
  int nbr = 0, mtr_nbr = 0;

  scanf("%d", &nbr);
  for (int itr = 1; itr <= nbr; itr++)
    if (nbr % itr == 0) {printf("%d ", itr); mtr_nbr++;}
  printf("\n%d\n", mtr_nbr);
  
  return (0);
}