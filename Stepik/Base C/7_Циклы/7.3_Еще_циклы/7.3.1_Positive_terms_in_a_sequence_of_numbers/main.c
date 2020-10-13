#include <stdio.h>

int   main(void)
{
  int num = 0;
  
  do{
    scanf("%d", &num);
    if (num > 0) printf("%d ", num);
  } while (num != 0);

  return (0);
}