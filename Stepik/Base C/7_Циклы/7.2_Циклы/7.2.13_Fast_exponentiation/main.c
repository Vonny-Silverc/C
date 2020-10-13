#include <stdio.h>

int   main(void) 
{
  int num = 0, pow = 0, res = 1;

  scanf("%d %d", &num, &pow);
  
  while(pow)
  {
    if (pow % 2 == 0) { pow /= 2; num *= num;}
    else { pow--; res *= num;}
 }
  printf("%d\n", res);

  return (0);
}