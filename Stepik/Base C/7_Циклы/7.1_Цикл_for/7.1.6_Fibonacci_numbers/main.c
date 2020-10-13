#include <stdio.h>

int   main(void) 
{
  int numb = 0, fib_a = 1, fib_b = 1, fib_c = 0;

  scanf("%d", &numb);
  for(int itr = 3; itr <= numb; itr++)
  {
    fib_c = fib_a + fib_b;
    fib_a = fib_b;
    fib_b = fib_c;
  }
  printf("%d ",fib_b);
  
  return (0);
}