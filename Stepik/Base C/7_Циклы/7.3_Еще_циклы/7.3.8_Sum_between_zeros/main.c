#include <stdio.h>

int   main(void)
{
  int num = 1, itr = 1, sum = 0;

  while (num != -9999)
  {
    scanf("%d", &num);
    if (num == 0) itr = num;
    while (itr == 0)
    {
      scanf("%d", &num);
      sum += num;
      if (num == 0) {printf("%d", sum); return (0);}
    }
  }

  return (0);
}