#include <stdio.h>

int   main(void)
{
  int nbr_1, nbr_2 = 0, nbr_3 = 0;

  scanf("%d %d %d", &nbr_1, &nbr_2, &nbr_3);
  if (nbr_1 <= nbr_2 && nbr_1 <= nbr_3)
    nbr_2 <= nbr_3 ? 
    (printf("%d %d %d", nbr_1, nbr_2, nbr_3)) : 
    (printf("%d %d %d", nbr_1, nbr_3, nbr_2));
  else if (nbr_2 <= nbr_1 && nbr_2 <= nbr_3)
    nbr_1 <= nbr_3 ? 
    (printf("%d %d %d", nbr_2, nbr_1, nbr_3)) : 
    (printf("%d %d %d", nbr_2, nbr_3, nbr_1));
  else if (nbr_3 <= nbr_1 && nbr_3 <= nbr_2)
    nbr_1 <= nbr_2 ? 
    (printf("%d %d %d", nbr_3, nbr_1, nbr_2)) : 
    (printf("%d %d %d", nbr_3, nbr_2, nbr_1));
    
  return (0);
}