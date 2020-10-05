#include <stdio.h>

int   main(void)
{

  for (int itr_one=1; itr_one <= 5; itr_one++)
  {
    for (int itr_two = 1; itr_two <= 5; itr_two++)
      printf("%-5.0d",itr_one * itr_two);
    printf("\n");
  }

  return (0);
}