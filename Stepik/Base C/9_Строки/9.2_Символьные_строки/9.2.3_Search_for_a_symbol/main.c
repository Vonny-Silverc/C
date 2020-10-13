#include <stdio.h>
# define LEN 100

int     main(void)
{
  char  buffer[LEN] = {0}, word = '0';
  int   count = -1;

  scanf("%c ", &word);
  fgets(buffer, 100, stdin);
  fflush(stdin);

  for (int itr = 0; buffer[itr] != '\0'; itr++)
    if (buffer[itr] == word) {printf("%d", itr); return (0);}

  printf("%d\n", count);
  
  return (0);
}