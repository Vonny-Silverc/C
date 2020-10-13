#include <stdio.h>

int   f_lcm(int a, int b)
{
  int temp = 0;

  while (b) { temp = a % b; a = b; b = temp;}
  return (a);  
}

int   main(void)
{
  int num_1 = 0, num_2 = 0, lcm = 0;

  scanf("%d %d", &num_1, &num_2);
  lcm = f_lcm(num_1, num_2);
  printf("%d\n", lcm = num_1 * num_2 / lcm);
  
  return (0);
}