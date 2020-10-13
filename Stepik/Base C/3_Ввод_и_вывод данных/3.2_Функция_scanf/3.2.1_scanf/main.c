#include <stdio.h> 

int   main(void)
{
  int a = 0, b = 0, c = 0, res = 0;

  scanf("%d %d %d", &a, &b, &c);
  res = a + b;
  printf("%d\n", res -= c);
  
  return (0);
}