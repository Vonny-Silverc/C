#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int   main(void)
{
  srand(time(NULL));
  int rand_digit = 0;

  printf("%d\n", rand_digit = rand() % 3);
    
  return (0);
}