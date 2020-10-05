#include <stdio.h>
#include <math.h>

int   main(void)
{
  int x_first;
  int y_first;
  int x_second;
  int y_second;

  x_first = 0;
  y_first = 0;
  x_second = 0;
  y_second = 0;
  scanf("%d %d %d %d", &x_first, &y_first,
  &x_second, &y_second);
  x_first = sqrt(pow(x_first, 2) + pow(y_first, 2));
  x_second = sqrt(pow(x_second, 2) + pow(y_second, 2));
  if(x_second > x_first)
    printf("1");
  else
    printf("2");
  return (0);
}