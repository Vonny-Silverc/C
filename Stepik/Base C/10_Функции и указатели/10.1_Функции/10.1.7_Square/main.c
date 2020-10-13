#include <stdio.h>
# define LEN 100

void    square(int side, char symb)
{
  char  buff[LEN][LEN] = {0};
  
  for (int itr_str = 0; itr_str < side; itr_str++)
  {
    for (int itr_col = 0; itr_col < side; itr_col++)  
      buff[itr_str][itr_col] = symb;
    printf("%s\n", buff[itr_str]);
  }
}

int     main(void)
{
  char  symb = '0';
  int   side = 0;

  scanf("%d %c", &side, &symb);
  square(side, symb);

  return (0);
}