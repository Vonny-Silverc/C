#include <stdio.h>
#include <string.h>
# define LEN 100

int   main(void)
{
  int len = 0, flg = 0;
  char buff_num[LEN] = {0};
  char buff_one[LEN] = {0};
  char buff[LEN] = {' '};
  
  fgets(buff_num, LEN, stdin);
  fflush(stdin);
  len = strlen(buff_num);

  for (int itr = 0; itr < LEN - 1; itr++)
  {
    buff[itr] = ' ';
    buff_one[itr] = ' ';
  }

  for (int itr = len - 2, mtr = 0; itr >= 0; itr--)
  {
    buff[mtr] = buff_num[itr];
    if (flg >= 2) {mtr++; flg = 0;}
    else flg++;
    mtr++;
  }

  for (int itr = 0; itr <= LEN ; itr++)
  {
    if (buff[itr] == ' ' && buff[itr + 1] == ' ')
      buff[itr] = '\0';
  }

  len = strlen(buff);

  for (int itr = len - 1, mtr = 0; itr >= 0; itr--)
  {
    buff_one[mtr] = buff[itr];
    mtr++;
  }

  for (int itr = 0; itr < LEN - 2; itr++)
  {
    if (buff_one[itr] == ' ' && buff_one[itr + 1] == ' ')
      buff_one[itr] = '\0';
  }

  printf("%s\n", buff_one);

  return (0);
}