#include <stdio.h>

int   main(void)
{
  int num;
  int res;
  int itr;

  num = 0;
  res = -9999;
  itr = 0;
  scanf("%d", &itr);
  while (itr != 0)
  {
    scanf("%d", &num);
    num > res ? (printf("%d ", res = num)) : (num -= 0);
    itr--;
  }
  return (0);
}