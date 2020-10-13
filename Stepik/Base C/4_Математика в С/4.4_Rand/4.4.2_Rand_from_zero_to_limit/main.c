#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int   main(void)
{
  srand(time(NULL));
  int limit = 0;

  scanf("%d", &limit);  
  while (limit < 0 || limit > 666)
    scanf("%d", &limit);  
  printf("%d\n", rand()%limit);
  
  return (0);
}