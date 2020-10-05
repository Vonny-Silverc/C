#include <stdio.h>

int   main(void)
{
  for (int num = 1; num <= 100; num++)
  {
    printf(" ");
    if (num % 3 == 0) printf("Fizz");
    if (num % 5 == 0) printf("Buzz");
    if (num % 5 != 0 && num % 3 != 0) printf("%d", num);
  }
  
  printf("\n");
  return (0);
}