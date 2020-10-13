#include <stdio.h>

int   main(void)
{
  int num = 0;

  scanf("%d", &num);
  for(int itr = 1; itr <= num; itr++)
  {
    for(int mtr = 1; mtr <= itr; mtr++)
      printf("%d ", mtr);
    printf("\n");
  }
  
  return (0);
}