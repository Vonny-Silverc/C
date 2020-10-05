#include <stdio.h>
#include <math.h>

int   main(void)
{
  int nbr_one = 0;
  int nbr_two = 0;
  int nbr_three = 0;
  int nbr_four = 0;
  
  nbr_one = 0;
  nbr_two = 0;
  nbr_three = 0;
  nbr_four = 0;
  scanf("%d %d %d %d", &nbr_one, &nbr_two, 
  &nbr_three, &nbr_four);
  nbr_one = nbr_one * 1000 + nbr_two * 100 
  + nbr_three * 10 + nbr_four;
  if (nbr_one == 1024)
    printf("open");
  else
    printf("close");
  return (0);
}