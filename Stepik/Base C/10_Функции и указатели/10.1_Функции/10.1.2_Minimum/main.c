#include <stdio.h>

int   min(int num_1, int num_2)
{
  int res = num_1 > num_2 ? (res = num_2) : (res = num_1);
  
  return (res);
}

int   main(void)
{
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);
  printf("%d\n", num_1 = min(num_1, num_2));

  return (0);
}