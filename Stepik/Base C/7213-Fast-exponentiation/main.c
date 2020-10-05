#include <stdio.h>

int   main(void) 
{
  int nbr; 
  int pow;
  int res;

  nbr = 0;
  pow = 0;
  res = 1;
  scanf("%d %d", &nbr, &pow);
  
  while(pow)
  {
    if (pow % 2 == 0)
    {   
      pow /= 2;
      nbr *= nbr;
    }
    else
    {
      pow--;
      res *= nbr;
    }
 }
  printf("%d\n", res);

  return (0);
}