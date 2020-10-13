#include <stdio.h>

int   main(void)
{
  int number = 0;
  
  do {
    scanf("%d", &number);
    printf("%d ", number);
  } while (number != -9999);
  printf("\n");
  
  return (0);
}