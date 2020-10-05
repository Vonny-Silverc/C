#include <stdio.h>

int   main(void)
{
  int num;
  int itr;

  num = 0;
  itr = 0;

  while (num != -9999)
  {
    scanf("%d", &num);
    if (num == 2517) itr = num;
    while (itr == 2517)
    {
      scanf("%d", &num);
      if (num != -9999) printf("%d ", num);
      else return (0);
    }
  }

  return (0);
}