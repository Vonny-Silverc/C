#include <stdio.h>

int   main(void)
{
  int nbr_first;
  int nbr_second;
  int result;

  nbr_first = 0;
  nbr_second = 0;
  result = 0;
  scanf("%d %d", &nbr_first, &nbr_second);
  nbr_first == nbr_second ? (result = 1) : (result = 0);
  printf("%d\n", result);
  return (0);
}