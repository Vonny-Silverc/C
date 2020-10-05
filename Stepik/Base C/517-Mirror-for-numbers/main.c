#include <stdio.h>

int   main(void)
{
  int orig_nbr = 0, mirr_nbr = 0, itr = 1;
  
  scanf("%d", &orig_nbr);
  
  do{
    itr = orig_nbr % 10;
    mirr_nbr += itr;
    mirr_nbr *= 10;
    orig_nbr /= 10;
  } while (orig_nbr != 0);
  
  printf("%d\n", mirr_nbr /= 10);
  
  return (0);
}