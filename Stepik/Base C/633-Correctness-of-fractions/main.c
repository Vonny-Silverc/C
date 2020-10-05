#include <stdio.h>

int   main(void)
{
  int nbr_first = 0;
  int nbr_second = 0;
    
  nbr_first = 0;
  nbr_second = 0;
  scanf("%d %d", &nbr_first, &nbr_second);
  if(nbr_second > nbr_first)
    printf("yes");
  else
    printf("no");
  return (0);
}