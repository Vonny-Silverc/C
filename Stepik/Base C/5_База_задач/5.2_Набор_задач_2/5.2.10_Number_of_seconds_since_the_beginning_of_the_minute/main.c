#include <stdio.h>

int   main(void)
{
  int second = 0;
  
  scanf("%d", &second);
  printf("%d", second %= 60);
  
  return (0);
}