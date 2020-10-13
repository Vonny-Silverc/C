#include <stdio.h>

void    print_date(int d, int m, int y, int k)
{
  if(k == 0) {y %= 100; printf("%02d.%02d.%02d", d, m, y);}
  if(k == 1) printf("%02d.%02d.%04d", d, m, y);
  if(k == 2) printf("%04d/%02d/%02d", y, m, d);
}

int   main(void)
{
  int day = 0, month = 0, year = 0, key = 0;

  scanf("%d %d %d %d", &day, &month, &year, &key);
  print_date(day, month, year, key);

  return (0);
}