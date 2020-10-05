#include <stdio.h>

int   main(void)
{
  char  sym;
  
  sym = '0';
  scanf("%s", &sym);
  sym -= 32;
  printf("%c", sym);
  return (0);
}