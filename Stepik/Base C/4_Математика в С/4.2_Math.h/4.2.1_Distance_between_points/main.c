#include <stdio.h>

int   main(void)
{
  int x_one = 0, x_two = 0, result = 0;

  scanf("%d %d", &x_one, &x_two);
  if(x_one != x_two)
  {
    result = (x_one > x_two) ? x_one - x_two : x_two - x_one;
    printf("%d\n", result);
  }
  else printf("0\n");
  
  return (0);
}