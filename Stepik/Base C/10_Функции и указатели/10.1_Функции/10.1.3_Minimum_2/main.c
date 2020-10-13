#include <stdio.h>

int   min(int num_1, int num_2, int num_3)
{
  int res = num_1 > num_2 ? (res = num_2) : (res = num_1);
  
  if (res > num_3) return (num_3);
  else return (res);
}

int   main(void)
{
  int num_1 = 0, num_2 = 0, num_3 = 0;

  scanf("%d %d %d", &num_1, &num_2, &num_3);
  printf("%d\n", num_1 = min(num_1, num_2, num_3));
  return (0);
}