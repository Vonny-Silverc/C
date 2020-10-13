#include <stdio.h>
#include <math.h>

int   main(void)
{
  int num = 0, itr = 1;

  scanf("%d", &num);
  while (pow(2, itr) < num) itr++;
  printf("%d", itr);
  
  return (0);
}