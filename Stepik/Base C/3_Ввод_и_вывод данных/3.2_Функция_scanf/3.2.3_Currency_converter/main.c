#include <stdio.h>

int   main(void)
{
  int     usd = 0;
  double  rate = 0, rub = 0;
  
  scanf("%d %lf", &usd, &rate);
  printf("%.13f\n", rub = usd * rate);
  
  return (0);
}