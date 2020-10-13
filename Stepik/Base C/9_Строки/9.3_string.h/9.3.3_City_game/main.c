#include <stdio.h>
#include <string.h>
#include <ctype.h>
# define LEN 100

int     main(void)
{
  char  city_1[LEN] = {0}, city_2[LEN] = {0};

  scanf("%s %s", city_1, city_2);

  size_t len1 = strlen(city_1) - 1;
  size_t len2 = strlen(city_2) - 1;
    
  if(tolower(city_1[0]) == city_2[len2] 
    || city_1[len1] == tolower(city_2[0])) printf("yes");
  else printf("no");
  
  return (0);
}