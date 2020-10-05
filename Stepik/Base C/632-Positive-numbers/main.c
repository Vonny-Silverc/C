#include <stdio.h>

int   main(void)
{
  int nbr_first;
  int nbr_second;
  int nbr_three;
  int itr;

  nbr_first = 0;
  nbr_second = 0;
  nbr_three = 0;
  itr = 0;
  scanf("%d %d %d", &nbr_first, &nbr_second, &nbr_three);
  nbr_first >= 0 ? (itr++) : (itr += 0);
  nbr_second >= 0 ? (itr++) : (itr += 0);
  nbr_three >= 0 ? (itr++) : (itr += 0);
  printf("%d", itr);
  return (0);
}