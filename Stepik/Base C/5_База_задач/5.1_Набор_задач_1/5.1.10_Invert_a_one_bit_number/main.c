#include <stdio.h>
#include <math.h>

int   main(void)
{
  int bit_nbr = 0;

  scanf("%d", &bit_nbr);
  if (bit_nbr == 1) {bit_nbr = 0; printf("%d\n",bit_nbr);}
  else if(bit_nbr == 0) {bit_nbr = 1; printf("%d\n",bit_nbr);}
  else printf("Число должно быть равно 0 или 1\n");
  
  return (0);
}