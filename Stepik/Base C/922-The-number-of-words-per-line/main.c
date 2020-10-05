#include <stdio.h>
# define LEN 100

int   main(void)
{
  char  buffer[LEN] = {0};
  int   word_count = 0;

  fgets(buffer, 100, stdin);
  for (int itr = 0; buffer[itr] != '\0'; itr++)
  {
    if (buffer[itr] != ' ' && (buffer[itr + 1] == ' ' || buffer[itr + 1] == '\n'))
      word_count++;
  }

  printf("%d\n", word_count);
  
  return (0);
}