#include <stdio.h>

int   main(void)
{
  int h = 0; // часы
  int m = 0; // минуты
  int s = 0; // секунды

  scanf("%d",&h);
  scanf("%d",&m);
  scanf("%d",&s);
  s = h * 60 * 60 + m * 60 + s;
  printf("%d\n", s);
  
  return (0);
}