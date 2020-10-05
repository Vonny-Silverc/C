#include <stdio.h> 

int   main(void)
{
  int     one = 3;
  int     two = 4;
  double  res = 0.75;

  printf("||-----|-----|-----|-----||\n");
  printf("|| act | one | two | res ||\n");
  printf("||=====+=====+=====+=====||\n");
  printf("||    %c|%d    |%d    |%.5d||\n", 
  '+', one, two, one + two);
  printf("||    %c|    %d|    %d|%.4d||\n", 
  '-', one, two, one - two);
  printf("||    %c|    %d|%d    |%.5d||\n", 
  '*', one, two, one * two);
  printf("||%c    |%d    |    %d|%.3f||\n", 
  '/', one, two, res);
  printf("===========================\n");
  
  return (0);
}