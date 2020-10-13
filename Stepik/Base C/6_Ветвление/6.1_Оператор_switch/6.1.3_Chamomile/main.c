#include <stdio.h>
#include <locale.h>

int   main(void) 
{
  setlocale(LC_ALL, "Ru");
  int petals = 0;  
  
  scanf("%d",&petals);
  petals %= 2;
  
  switch (petals)
  {
    default : break ;
    case 0  : printf("Не любит\n"); break;
    case 1  : printf("Любит\n"); break;
  }
  
  return (0);
}