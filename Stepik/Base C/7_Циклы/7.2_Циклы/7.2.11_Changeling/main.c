#include <stdio.h>

int   main(void)
{
  int num = 0, gap = 0, res = 0, itr = 0;

  scanf("%d", &num);
  itr = num % 10;
  do { 
    gap = num % 10;
    res = res * 10 + gap;
    num /= 10; 
  } while (num != 0);
  if (itr == 0) printf("%d", itr);
  printf("%d\n", res);

  return (0);
}