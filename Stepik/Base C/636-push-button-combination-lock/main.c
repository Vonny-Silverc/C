#include <stdio.h>
#include <math.h>

int   main(void)
{
  int x_sum;
  int x_one;
  int x_two;
  int x_three;
  int itr;

  x_sum = 0;
  x_one = 0;
  x_two = 0;
  x_three = 0;
  itr = 0;
  scanf("%d %d %d", &x_one, &x_two, &x_three);
  x_sum = x_one + x_two + x_three;
  if (x_one == 2 || x_one == 8 || x_one == 4)
  {
    if (x_one == 2 || x_one == 8 || x_one == 4)
    {
      if (x_one == 2 || x_one == 8 || x_one == 4)
        itr++;
      itr++;
    }
    itr++;
  }
  if (itr == 3 && x_sum == 14)
    printf("open");
  else
    printf("close");
  return (0);
}