#include <stdio.h>
#include <math.h>

int   main(void)
{
  int x_one = 0, y_one = 0, x_two = 0, y_two = 0;

  scanf("%d %d %d %d", &x_one, &y_one, &x_two, &y_two);
  
  x_one = sqrt(pow(x_one, 2) + pow(y_one, 2));
  x_two = sqrt(pow(x_two, 2) + pow(y_two, 2));
  if(x_two > x_one) printf("1");
  else printf("2");
  
  return (0);
}