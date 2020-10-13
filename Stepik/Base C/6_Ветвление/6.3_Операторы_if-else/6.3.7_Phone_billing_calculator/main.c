#include <stdio.h>

int   main(void)
{
  int time = 0;

  scanf("%d", &time);
  if(time <= 500) printf("350");
  else printf("%d", time = (time - 500) * 2 + 350);

  return (0);
}