#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  char  buff[LEN], *itr = 0;

  fgets(buff, LEN, stdin);
  fflush(stdin);

  for(itr = strtok(buff, " "); itr; itr = strtok(0, " "))
  {
    if(itr[0] == itr[strlen(itr) - 1]) printf("%s ", itr);
    else if(itr[0] == itr[strlen(itr) - 2]) printf("%s ", itr);
  }

  return (0); 
}