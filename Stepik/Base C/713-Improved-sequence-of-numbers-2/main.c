#include <stdio.h>

int   main(void) 
{
    
  int n_min;
  int n_max;
  int itr;

  n_min = 0;
  n_max = 0;
  itr = 0;
  scanf("%d %d", &n_min, &n_max);
  n_min > 0 ? (n_min += 0) : (n_min = 1);
  for (n_min = n_min; n_min <= n_max; n_min++)
  {
    printf("%d ", n_min);
    itr++;
  }
  printf("\n%d\n", itr);
  return (0);
}