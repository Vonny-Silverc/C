#include <stdio.h>

int   gcd(int x, int y)
{
  if (x - y == 0) return (x);
  if (x > y) return (gcd(x - y, y));
  else return (gcd(x, y - x));
}

int   main(void)
{
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);
  printf("%d\n", num_1 = gcd(num_1, num_2));
  
  return (0);
}