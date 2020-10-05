#include <stdio.h>

int   main(void)
{
  int number;
  int result_max;
  int result_min;

  number = 0;
  result_max = -2147483648;
  result_min = 2147483647;

  do {
    scanf("%d", &number);
    if (number >= result_max && number != 0)
      result_max = number;
    if (number <= result_min && number != 0)
      result_min = number;
  } while(number != 0);

  if (result_min == 2147483647)
    printf("%d\n", result_max);
  else
    printf("%d %d\n", result_max, result_min);
  return (0);
}