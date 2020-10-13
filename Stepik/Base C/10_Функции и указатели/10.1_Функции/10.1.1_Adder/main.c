#include <stdio.h>

int   sum(int num_one, int  num_two)
{
  int result = num_one + num_two;

  return (result);
}

int   main(void)
{
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);
  printf("%d\n", num_1 = sum(num_1, num_2));

  return (0);
}