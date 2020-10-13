#include <stdio.h>

int   main(void)
{
  int nbr_one = 0, nbr_two = 0;
    
  scanf("%d %d", &nbr_one, &nbr_two);
  if(nbr_two > nbr_one) printf("yes");
  else printf("no");
  
  return (0);
}