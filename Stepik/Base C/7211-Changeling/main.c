#include <stdio.h>

int   main(void)
{
  int nbr;
  int gap;
  int res;
  int itr;

  nbr = 0;
  gap = 0;
  res = 0;
  itr = 0;
  scanf("%d", &nbr);
  itr = nbr % 10;
  do { 
    res *= 10;
    gap = nbr % 10;
    res += gap;
    nbr /= 10; 
  } while (nbr != 0);
  itr == 0 ? (printf("%d", itr)) : (itr += 0);
  printf("%d", res);
  return (0);
}