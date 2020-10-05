#include <stdio.h>

int   main(void)
{
  int number;

  number = 0;
  while(number != -9999)
  {
    scanf("%d", &number);
    if (number != -9999)
      printf("%d ", number);
  }
  printf("\n");
  return (0);
}