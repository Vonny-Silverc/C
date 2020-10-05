#include <stdio.h>

int   main(void)
{
  int   size_symb = 0;
  char  alp_sym = 'Z';
  char  result  = '0';
  scanf("%d", &size_symb);
  size_symb -= 1;

  while (size_symb >= 0)
  {
    printf("%c", result = alp_sym - size_symb);
    size_symb--;
  }
  printf("\n");

  return (0);
}