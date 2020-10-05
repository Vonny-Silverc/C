#include <stdio.h>

int   main(void)
{
  int difference = 0;
  int even = 0;
  int odd = 0;
  int result = 0;

  for (int itr = 0; itr < 5; itr++)
  {
    scanf("%d", &difference);
    difference % 2 == 0 ? (even++) : (odd++);
  }
  
  printf("%d", result = odd - even);
  
  return (0);
}