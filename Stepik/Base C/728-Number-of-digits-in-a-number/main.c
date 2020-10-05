#include <stdio.h>

int   main(void)
{
  int nbr;
  int itr;

  nbr = 0;
  itr = 0;
  scanf("%d", &nbr);
  do {
    nbr /= 10;
    itr++;
  } while (nbr != 0);
  printf("%d\n", itr);
  return (0);
}