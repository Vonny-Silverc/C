#include <stdio.h>

int   min(int num_1, int num_2, int num_3)
{
  int res = num_1 > num_2 ? (res = num_2) : (res = num_1);
  
  if (res > num_3) return (num_3);
  else return (res);
}

int   main(void)
{
  int num_one = 0;
  int num_two = 0;
  int num_tree = 0;

  scanf("%d %d %d", &num_one, &num_two, &num_tree);
  printf("%d\n", num_one = min(num_one, num_two, num_tree));
  return (0);
}