#include <stdio.h>

int   main(void)
{
  int number = 0;

  scanf("%d", &number);
  printf("%d", number /= 10);
  
  return (0);
}