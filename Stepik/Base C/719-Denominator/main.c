#include <stdio.h>

int   main(void)
{
  int numbers;
  int mtr_nbr;

  numbers = 0;
  mtr_nbr = 0;
  scanf("%d", &numbers);
  for (int itr = 1; itr <= numbers; itr++)
  {
    if (numbers % itr == 0)
    {
      printf("%d ", itr);
      mtr_nbr++;
    }
  }
  printf("\n%d\n", mtr_nbr);
  return (0);
}