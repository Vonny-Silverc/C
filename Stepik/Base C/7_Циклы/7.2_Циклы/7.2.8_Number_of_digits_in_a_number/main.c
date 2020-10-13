#include <stdio.h>

int   main(void)
{
  int num = 0, itr = 0;

  scanf("%d", &num);
  do { num /= 10; itr++;} while (num != 0);
  printf("%d\n", itr);
  
  return (0);
}