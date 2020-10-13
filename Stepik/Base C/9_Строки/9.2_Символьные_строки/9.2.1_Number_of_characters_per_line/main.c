#include <stdio.h>
#include <string.h>
# define LEN 100

int     main(void)
{
  char  buffer[LEN] = {0}; 
  int   len = 0;

  fgets(buffer, 99, stdin);
  fflush(stdin);
  printf("%d\n", len = strlen(buffer));

  return (0);
}