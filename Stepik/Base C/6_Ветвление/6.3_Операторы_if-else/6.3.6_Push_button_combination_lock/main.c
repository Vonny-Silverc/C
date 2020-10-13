#include <stdio.h>
#include <math.h>

int   main(void)
{
  int x_sum = 0, x_1 = 0, x_2 = 0, x_3 = 0, itr = 0;

  scanf("%d %d %d", &x_1, &x_2, &x_3);
  x_sum = x_1 + x_2 + x_3;

  if (x_1 == 2 || x_1 == 8 || x_1 == 4)
  {
    if (x_1 == 2 || x_1 == 8 || x_1 == 4)
    {
      if (x_1 == 2 || x_1 == 8 || x_1 == 4) 
        itr++;
      itr++;
    }
    itr++;
  }
  
  if (itr == 3 && x_sum == 14) printf("open");
  else printf("close");

  return (0);
}