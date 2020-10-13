#include <stdio.h>
#include <string.h>
# define LEN 10

int     main(void)
{
  char  str[LEN] = {0};
  int   sum_1 = 0, sum_2 = 0;

  fgets(str, LEN, stdin);
  fflush(stdin);
  
  sum_1 = str[0] + str[1] + str[2];
  sum_2 = str[3] + str[4] + str[5];
  
  sum_1 == sum_2 ? (printf("yes\n")) : (printf("no\n"));

  return (0);
}