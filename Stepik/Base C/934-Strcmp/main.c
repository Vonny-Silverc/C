#include <stdio.h>
#include <string.h>
# define LEN 100
int     main(void)
{
  char  str_1[LEN] = {0};
  char  str_2[LEN] = {0};
  int   cmp = 0;

  fgets(str_1, LEN, stdin);
  fflush(stdin);
  fgets(str_2, LEN, stdin);
  fflush(stdin);

  if (strcmp (str_1, str_2) == 0) printf("yes");
  else printf("no");

  return(0);
}