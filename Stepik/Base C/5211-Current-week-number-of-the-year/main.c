#include <stdio.h>

int   main(void)
{
  int week = 0;
  
  scanf("%d", &week);
  if (week % 7 == 0) printf("%d", week /= 7);
  else
  {
    week /= 7;
    week != 0 ? (week++) : (week = 1);
    printf("%d", week);
  }
  
  return (0);
}