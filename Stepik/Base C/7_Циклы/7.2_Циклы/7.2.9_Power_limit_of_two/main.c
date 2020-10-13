#include <stdio.h>
#include <math.h>

int   main(void)
{
  int num = 0, itr = 1;

  scanf("%d", &num);
  while (pow(2, itr) <= num) 
  { 
    printf("%d ", itr); 
    itr++;
  }
  
  return (0);
}