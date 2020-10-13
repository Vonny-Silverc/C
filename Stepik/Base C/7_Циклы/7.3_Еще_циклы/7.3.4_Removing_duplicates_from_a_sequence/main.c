#include <stdio.h>

int   main(void)
{
  int num = 0, res = -9999, itr = 0;

  scanf("%d", &itr);
  
  while (itr != 0)
  {
    scanf("%d", &num);
    if (num > res) printf("%d ", res = num);
    itr--;
  }

  return (0);
}