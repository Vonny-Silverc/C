#include <stdio.h>

int   main(void)
{
  int fact = 1;
  
  for (int itr = 1; itr != 11; fact *= ++itr) 
    printf("%d%s=%8d\n", itr, ((itr == 10) ? "!" : "! "), fact);
  
  return (0);
}