#include <stdio.h>

void  factors(int num)
{
  for(int itr = 1; itr <= num; itr++)
    if(num % itr == 0) printf("%d ", itr);
  printf("\n");

}

int   main(void)
{
  int num = 0;

  scanf("%d", &num);
  factors(num);

  return (0);
}