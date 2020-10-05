#include <stdio.h>
#include <locale.h>

int     main(void)
{
  setlocale(LC_ALL, "");
  char    op = '0';
  double  nbr_first = 0;
  double  nbr_second = 0;

  scanf("%c %lf %lf", &op, &nbr_first, &nbr_second);
  
  switch (op)
  {
    case '+': printf("%.2lf", nbr_first+nbr_second); break;
    case '-': printf("%.2lf", nbr_first-nbr_second); break;
    case '/': (nbr_second != 0) ? printf("%.2lf", nbr_first/nbr_second) : printf("ERROR!"); break;
    case '*': printf("%.2lf", nbr_first*nbr_second); break;
    default : printf("ERROR!"); break;
  }
  
  return (0);
}