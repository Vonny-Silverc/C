
#include <stdio.h>
#include <string.h>
# define LEN 30

int     main(void)
{
  char  str_1[LEN] = {0};
  char  str_2[LEN] = {0};    
  int   len = 0;

  fgets(str_1, LEN, stdin);
  fflush(stdin);
  fgets(str_2, LEN, stdin);
  fflush(stdin);

  len = strlen(str_1);
  str_1[len- 1] = '.';
  printf("%s%s", str_1, str_2);

  return (0);
}