#include <stdio.h>

int   min(int num_one, int num_two)
{
  int res = num_one > num_two ? (res = num_two) : (res = num_one);
  
  return (res);
}

int   main(void)
{
  int num_1 = 0;
  int num_2 = 0;

  scanf("%d %d", &num_1, &num_2);
  printf("%d\n", num_1 = min(num_1, num_2));

  return (0);
}