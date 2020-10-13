#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  char  buff[LEN] = {0};
  int   len = 0, flg_1 = 0;
  
  fgets(buff, LEN, stdin);
  fflush(stdin);
  len = strlen(buff);

  for (int itr = 0; itr < len - 1; itr++)
  {
    if (buff[itr] == '.' && (buff[itr + 1] < '0' || buff[itr + 1] > '9') ) 
    {
      printf("error\n"); return (0);
    }
    if (buff[0] == '.') {printf("error\n"); return (0);}
    if (buff[0] == '-' && buff[1] == '.') {printf("error\n"); return (0);}
    if (buff[0] == '+' && buff[1] == '.') {printf("error\n"); return (0);}
    if (buff[0] == '-' && itr == 0) continue;
    if (buff[0] == '+' && itr == 0) continue;
    if (buff[itr] == '.' && flg_1 == 1) {printf("error\n"); return (0);}
    if (buff[itr] == '.') flg_1++;
    if (buff[itr] != '.' && (buff[itr] < '0' || buff[itr] > '9')) {printf("error\n"); return (0);}

  }

  if (flg_1 == 0) printf("int\n");
  else printf("float\n");

  return (0);
}