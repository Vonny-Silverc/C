#include <stdio.h>

int   main(void)
{
  int time;

  time = 0;
  scanf("%d", &time);
  if(time <= 500)
    printf("350");
  else
  {
    time -= 500;
    time *= 2;
    time += 350;
    printf("%d", time);
  }
  return (0);
}