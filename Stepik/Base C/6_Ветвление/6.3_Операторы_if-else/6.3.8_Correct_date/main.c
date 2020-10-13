#include <stdio.h>

int   main(void)
{
  int day = 0, month = 0;

  scanf("%d %d", &day, &month);
  if (month == 2)
    day <= 29 ? (printf("correct")) : (printf("error"));
  else if (month == 1 || month == 3 || month == 5 ||
   month == 7 || month == 8 || month == 10 || month == 12)
    day <= 31 ? (printf("correct")) : (printf("error"));
  else
    day <= 30 ? (printf("correct")) : (printf("error"));
  
  return (0);
}