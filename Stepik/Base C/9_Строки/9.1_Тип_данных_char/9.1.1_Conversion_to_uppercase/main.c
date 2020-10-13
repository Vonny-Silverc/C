#include <stdio.h>

int   main(void)
{
  char  sym = '0';

  scanf("%s", &sym);
  printf("%c", sym -= 32);
  
  return (0);
}