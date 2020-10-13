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
    
  for (int go_itr = 0; go_itr < len; go_itr++)
  {
    if (buff[go_itr] == '/' && buff[go_itr + 1] == '*')
    {
      int stop_itr = go_itr + 2;
      while ((buff[stop_itr] != '*' || buff[stop_itr + 1] != '/') && buff[stop_itr] != '\n')
        stop_itr++;
      if (buff[stop_itr] == '*' && buff[stop_itr + 1] == '/')
        go_itr = stop_itr + 2;
    }
    printf("%c", buff[go_itr]);
  }

  return (0);
}