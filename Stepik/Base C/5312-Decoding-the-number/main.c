#include <stdio.h>

int   main(void)
{ 
  int number_x = 0;
  int number_y = 0;
  int number_i = 0;

  scanf("%d", &number_x);
  
  for (int mtr = 0; mtr <= 3; mtr++)
  {
    number_i = number_x % 10;
    number_i = (number_i + 10 - 7) % 10;
    number_y += number_i;
    number_y *= 10;
    number_x /= 10;
  }
  
  number_y /= 10;
  number_x = number_y / 100;
  number_x = ((number_x % 10) * 10) + (number_x / 10);
  number_x *= 100;
  number_i = number_y % 100;
  number_i = ((number_i % 10) * 10) + (number_i / 10);
  number_x += number_i;
  
  printf("%d\n", number_x);
  
  return (0);
}