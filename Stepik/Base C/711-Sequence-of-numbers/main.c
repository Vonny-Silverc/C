#include <stdio.h>

int   main(void) 
{  
  int number;

  number = 0;  
  scanf("%d", &number);
  for (int itr = 1; itr <= number; itr++)
    printf("%d ", itr);
  return (0);
}