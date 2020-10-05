#include <stdio.h>
#include <string.h>
# define LEN 100
int     main(void)
{
  char  str_1[LEN] = {0};
  char  str_2[LEN] = {0};
  int   len_1 = 0, len_2 = 0;

  fgets(str_1, LEN, stdin);
  fflush(stdin);
  fgets(str_2, LEN, stdin);
  fflush(stdin);

  len_1 = strlen(str_1);
  len_2 = strlen(str_2);

  str_1[0] += 32;
  str_2[0] += 32;

  if (str_1[0] == str_2[len_2 - 2]|| str_2[0] == str_1[len_1 - 2])
    printf("yes\n");
  else printf("no\n");
  return (0);
}