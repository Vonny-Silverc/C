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
      mtr_nbr++;
  }
  mtr_nbr == 2 ? (printf("1\n")) : (printf("0\n"));
  return (0);
}