#include <stdio.h>

int   f_lcd(int a, int b)
{
  int c;

  c = 0;
  while (b) 
  {
    c = a % b;
    a = b;
    b = c;        
  }
  return (a);  
}

int   main(void)
{
  int num_one;
  int num_two;
  int lcm;

  num_one = 0;
  num_two = 0;
  lcm     = 0;
  scanf("%d %d", &num_one, &num_two);
  lcm = f_lcd(num_one, num_two);
  lcm = num_one * num_two / lcm;
  printf("%d\n", lcm);
  return (0);
}