#include <stdio.h>

void  minmax(int * x, int * y)
{
  int temp = 0;
    
  if (*x > *y)
  {
    temp = *x;
    *x = *y;
    *y = temp;
  }
}

int   main(void)
{
  int num_1 = 0, num_2 = 0;

  scanf("%d %d", &num_1, &num_2);
  minmax(&num_1, &num_2);
  printf("num_1 = %d\n", num_1);
  printf("num_2 = %d\n", num_2);
  
  return (0);
}