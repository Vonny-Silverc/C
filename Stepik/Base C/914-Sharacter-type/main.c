#include <stdio.h>

int   main(void)
{
  int   num_symb = 0;
  char  symb = '0';
  scanf("%c", &symb);
  
  num_symb = symb;
  if ((num_symb >= 64 && num_symb <= 90) || (num_symb >= 97 && num_symb <= 122))
    printf("en\n");
  else if ((num_symb >= 48 && num_symb <= 57))
    printf("digit\n");
  else
    printf("error\n");

  return (0);
}