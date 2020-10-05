#include <stdio.h>

int   main(void) 
{
  int numb;
  int fib_a;
  int fib_b;
  int fib_c;

  numb = 0;
  fib_a = 1;
  fib_b = 1;
  fib_c = 0;
  scanf("%d", &numb);
  for(int i = 3; i <= numb; i++)
  {
    fib_c = fib_a + fib_b;
    fib_a = fib_b;
    fib_b = fib_c;
  }
  printf("%d ",fib_b);
  return (0);
}