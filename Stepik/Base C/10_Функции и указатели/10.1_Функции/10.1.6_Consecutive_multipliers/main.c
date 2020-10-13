#include <stdio.h>

int   sequence_multipliers(int number)
{
  int res = 0;

  for (int itr = 1; res <= number; itr++)
  {
    res = itr * (itr + 1) * (itr + 2);
    if (res == number) return (itr);
  }
  res = -1;

  return (res);
}

int   main(void)
{
  int num = 0;
  
  scanf("%d", &num);
  printf("%d\n", sequence_multipliers(num));

  return (0);
}