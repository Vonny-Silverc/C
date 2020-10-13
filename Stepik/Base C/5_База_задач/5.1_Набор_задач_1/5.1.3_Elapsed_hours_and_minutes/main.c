#include <stdio.h>

int   main(void)
{
  int seconds = 0, minutes = 0, hours = 0;

  scanf("%d", &seconds);
  hours = seconds / 60 / 60;
  minutes = seconds / 60 % 60;
  printf("%d %d\n", hours, minutes);
  
  return (0);
}