#include <stdio.h>
#include <string.h>

int     main(void)
{
  char  str_1[40] = "Hello, "; 
  char  str_2[20] = {0};    
  
  scanf("%s", str_2);
  strcat(str_1, str_2);

  printf("%s\n", str_1);

  return (0);
}