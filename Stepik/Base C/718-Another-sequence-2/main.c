#include <stdio.h>

int   main(void)
{
  int nbr_a;
  int nbr_b;

  nbr_a = 0;
  nbr_b = 0;
  scanf("%d %d", &nbr_a, &nbr_b);
  for (int itr_a = nbr_a; itr_a <= nbr_b; itr_a++)
  {
    for (int itr_b = 1; itr_b <= itr_a; itr_b++)
      printf("%4d", itr_a);
  }
  printf("\n");
  return (0);
}