#include <stdio.h>

void    char_cesar(char *ch, int shift)
{
 *ch+shift <= 'z' ? (*ch += shift) :
  (*ch = ('a'+ (shift - ('z' - *ch + 1))));
}

int     main(void)
{
  char  sym = '0';
  int   key = 0;

  scanf("%c %d", &sym, &key);
  char_cesar(&sym, key);
  printf("%c\n", sym);
  
  return (0);
}