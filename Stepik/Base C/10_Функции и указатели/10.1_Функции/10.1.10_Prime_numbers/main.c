#include <stdio.h>

int   is_prime(int num)
{
  int counter = 0;

  for(int itr = 1; itr <= num; itr++)
    if(num % itr == 0) counter++;
  
  if (counter <= 2)  {counter = 1; return (counter);}
  else {counter = 0; return (counter);}
}

int   main(void)
{
  int number = 0;

  scanf("%d", &number);
  printf("%d", number = is_prime(number));

  return (0);
}