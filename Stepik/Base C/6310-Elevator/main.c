#include <stdio.h>

int   main(void)
{
  int nbr_a;
  int nbr_b;
  int nbr_c;

  nbr_a = 0;
  nbr_b = 0;
  nbr_c = 0;  
  scanf("%d %d %d", &nbr_a, &nbr_b, &nbr_c);
  if (nbr_a <= nbr_b && nbr_a <= nbr_c)
    nbr_b <= nbr_c ? 
    (printf("%d %d %d", nbr_a, nbr_b, nbr_c)) : 
    (printf("%d %d %d", nbr_a, nbr_c, nbr_b));
  else if (nbr_b <= nbr_a && nbr_b <= nbr_c)
    nbr_a <= nbr_c ? 
    (printf("%d %d %d", nbr_b, nbr_a, nbr_c)) : 
    (printf("%d %d %d", nbr_b, nbr_c, nbr_a));
  else if (nbr_c <= nbr_a && nbr_c <= nbr_b)
    nbr_a <= nbr_b ? 
    (printf("%d %d %d", nbr_c, nbr_a, nbr_b)) : 
    (printf("%d %d %d", nbr_c, nbr_b, nbr_a));
  return (0);
}