#include <stdio.h>
#include <math.h>

int   main(void)
{
  int nbr;
  int itr;

  nbr = 0;
  itr = 1;
  scanf("%d", &nbr);
  while (pow(2, itr) < nbr)
    itr++;
  printf("%d", itr);
  return (0);
}