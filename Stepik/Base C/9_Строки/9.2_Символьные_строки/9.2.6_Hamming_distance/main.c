#include <stdio.h>
#include <string.h>
# define LEN 15

int   main(void)
{
  int   result = 0;
  char  buff_one[LEN] = {0}, buff_two[LEN] = {0};

  fgets(buff_one, LEN, stdin);
  fflush(stdin);
  fgets(buff_two, LEN, stdin);
  fflush(stdin);

  for (int itr = 0; buff_one[itr] != '\0'; itr++)
    if (buff_one[itr] != buff_two[itr]) result++; 
  
  printf("%d", result);
  return (0);
}