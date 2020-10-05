#include <stdio.h>

int   main(void)
{
  int   week = 0;
  
  scanf("%d", &week);
  if (week % 7 == 0) printf("%d\n", week = 0);
  else printf("%d", week %= 7);
  
  return (0);
}