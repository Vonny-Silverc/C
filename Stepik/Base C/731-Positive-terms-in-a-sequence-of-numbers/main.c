#include <stdio.h>

int   main(void)
{
  int num;

  num = 0;
  
  do{
    scanf("%d", &num);
    num > 0 ? (printf("%d ", num)) : (num += 0);
  } while (num != 0);

  return (0);
}