#include <stdio.h>

void char_register(char *ch, int fl)
{
  if((*ch >= 'A' && *ch <= 'Z') && fl == 0) *ch+=32;
  else if((*ch >= 'a' && *ch <= 'z') && fl == 1) *ch-=32;
}

int   main(void)
{
  char sym = '0';
  int  flg = 0;

  scanf("%c %d", &sym, &flg);
  char_register(&sym, flg);
  printf("%c\n", sym);
  
  return (0);
}