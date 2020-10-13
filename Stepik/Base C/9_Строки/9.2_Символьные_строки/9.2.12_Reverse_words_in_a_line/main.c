#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  char  buff_one[100], *buff = 0;
  int   itr = 0;

  fgets(buff_one, LEN, stdin);
  fflush(stdin);
  
  for(buff = strtok(buff_one, " "); buff; buff = strtok(0, " "))
  {
    for (itr = strlen(buff); itr > 0; itr--)
    {
        if (buff[itr] == '\n'|| buff[itr] == '\0') continue;
        else printf("%c", buff[itr]);
    }
    printf(" ");  
  }
  
  printf("\n");
  
  return (0);
}