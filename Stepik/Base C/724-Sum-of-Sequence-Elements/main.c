#include <stdio.h>

int   main(void)
{
  int number;
  int result;

  number = 0;
  result = 0;
  do {
    scanf("%d", &number);
    if (number != 0)
      result += number;
  } while(number != 0);
  printf("%d\n", result);
  return (0);
}