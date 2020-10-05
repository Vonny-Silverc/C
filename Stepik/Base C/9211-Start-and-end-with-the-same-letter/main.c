#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  char  sym_start = '0', sym_stop = '0';
  char  buff[LEN] = {0};
  int   itr_one = 0, itr_two = 0, len = 0;

  fgets(buff, LEN, stdin);
  fflush(stdin);
  len = strlen(buff);
  
  char buff_out[LEN] = {0};

  for (int itr = 0; itr < LEN - 2; itr++)
    buff_out[itr] = ' ';
  
  for (itr_one = 0; itr_one < len - 1; itr_one++)
  {
    if (buff[itr_one] != ' ' && (buff[itr_one - 1] == ' ' ||  itr_one == 0))
    {
      sym_start = buff[itr_one];
      for (itr_two = itr_one; itr_two < len - 1; itr_two++)
      {
        if (buff[itr_two] != ' ' && (buff[itr_two + 1] == ' ' || itr_two == len - 2))
        {  
          sym_stop = buff[itr_two];
          for (int itr = itr_one; itr <= itr_two; itr++)
          { 
            if (sym_start == sym_stop) buff_out[itr] = buff[itr]; 
          }
          
          break;
        }
    }

  }

  for (int itr = len; buff_out[itr] == ' '; itr--)
    buff_out[itr] = '\0';

  for (int itr = 0; buff_out[itr] != '\0'; itr++)
  {
    if(buff_out[itr] == ' ' && buff_out[itr + 1] == ' ') continue;
    printf("%c", buff_out[itr]);
  }
  printf("\n");

  return (0); 
}