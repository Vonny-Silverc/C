#include <stdio.h>

int   main(void)
{
  int nbr_first = 0;
  int nbr_second = 0;
  int result = 0;

  scanf("%d %d", &nbr_first, &nbr_second);
  nbr_first % nbr_second == 0 ? (result = 0) : 
    (result = nbr_first % nbr_second);
  printf("%d", result);
  
  return (0);
}