#include <stdio.h>

int     main(void)
{
  int   size_sym = 0;
  char  alp_sym = 'Z', result  = '0';
  
  scanf("%d", &size_sym);
  size_sym -= 1;

  while (size_sym >= 0)
  {
    printf("%c", result = alp_sym - size_sym);
    size_sym--;
  } 
  printf("\n");

  return (0);
}