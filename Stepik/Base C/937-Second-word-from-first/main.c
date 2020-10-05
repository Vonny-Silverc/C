#include <stdio.h>
#include <string.h>
# define LEN 50

int     main(void)
{
  char  str_1[LEN] = {0};
  char  str_2[LEN] = {0}; 
  int   mtr = 0,len = 0;
  
  fgets(str_1,52,stdin);
  fflush(stdin);
  fgets(str_2,52,stdin);
  fflush(stdin);
  len = strlen(str_2);

  for (int itr_one = 0;itr_one < strlen(str_2); itr_one++)
  {
    for (int itr_two = 0; str_1[itr_two] != '\0'; itr_two++) 
    {
      if (str_1[itr_two] == str_2[itr_one])
      { 
        mtr++; 
        str_1[itr_two] = '0';
        break;
      }
    }
  } 
  if (mtr == len) printf("yes");
  else printf("no");
  
  return (0);
} 