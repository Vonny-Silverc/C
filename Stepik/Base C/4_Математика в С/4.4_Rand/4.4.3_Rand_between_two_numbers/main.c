#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int   main(void)
{
  srand(time(NULL));
  int num_one = 0, num_two = 0;

  scanf("%d %d", &num_one, &num_two);
  while (num_one > num_two)
    scanf("%d %d", &num_one, &num_two);
  printf("%d\n", num_one + rand() % 
  (num_two - num_one + 1));
  
  return (0);
}