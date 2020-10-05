#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  char  buff[LEN] = {0};
  int   len = 0;
  fgets(buff, LEN, stdin);
  fflush(stdin);
  len = strlen(buff);

  for (int itr = 0; itr < len; itr++)
  {
    if (buff[0] != ' ' && itr == 0) continue;
    else if (buff[itr] == ' ' && buff[itr + 1] != ' ') continue;
    else printf("%c", buff[itr]);
  }

  return (0);
}