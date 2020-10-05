#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  int   count = 0, i_go = -1, i_stop = 0, flg = 0, len = 0;
  char  buff[LEN] = {0};

  fgets(buff, LEN, stdin);
  fflush(stdin);
  len = strlen(buff);

  while (i_go < len)
  {
    i_go++;
    if (buff[i_go] == '/' && buff[i_go + 1] == '*')
    {
      if (buff[i_go + 1] == '*' && buff[i_go + 2] == '/') break;
      i_stop = i_go;
      while (i_stop < len)
      {
        if (buff[i_stop] == '*' && buff[i_stop + 1] == '/') {i_stop++; flg++; break;}
        i_stop++;
      }
    }
    if (buff[i_go] == '/' && buff[i_go + 1] == '*') break;
  }
  
  for(int itr = 0; itr < len; itr++)
  {
    if (flg != 0 && (itr >= i_go && itr <= i_stop)) continue;
    printf("%c", buff[itr]);
  }

  return (0);
}