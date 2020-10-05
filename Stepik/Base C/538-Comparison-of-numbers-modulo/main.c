#include <stdio.h>

int   main(void)
{
  int nbr_first = 0;
  int nbr_second = 0;
  int modul = 0;

  scanf("%d %d %d", &modul, &nbr_first, &nbr_second);
  nbr_first = (modul + nbr_first % modul) % modul;
  nbr_second = (modul + nbr_second % modul) % modul;
  
  printf("%d %d\n", nbr_first, nbr_second);
  
  return (0);
}