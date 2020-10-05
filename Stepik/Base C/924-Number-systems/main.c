#include <stdio.h>
#include <string.h>
#include <math.h>
# define LEN 100

int     main(void)
{
  char  buffer[LEN] = {0};
  int   resul = 0;
  int   count = 0;
  int   power = 0;

  fgets(buffer, LEN, stdin);
  fflush(stdin);
  count = strlen(buffer);
  
  for (int itr = 0; itr < count; itr++)
  {
    if (buffer[itr] == '1')
    {
      power = count - itr - 1;
      resul += 1 * pow(2, power);
    }
  }

  printf("%d\n", resul /= 2);
  
  return (0);
}