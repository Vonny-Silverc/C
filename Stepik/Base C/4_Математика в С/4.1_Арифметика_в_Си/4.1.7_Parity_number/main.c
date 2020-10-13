#include <stdio.h>

int   main(void)
{
  int number = 0;
  
  scanf("%d", &number);
  number % 2 == 0 ? (printf("1\n")) : (printf("0\n"));
  
  return (0);
}