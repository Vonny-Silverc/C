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
    printf("%c", buff[itr]);
    if ((itr + 2) % 3 == len % 3) printf(" ");
  }

  return (0);
}