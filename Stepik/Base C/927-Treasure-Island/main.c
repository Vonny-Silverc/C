#include <stdio.h>
# define LEN 20

int     main(void)
{
  int   step_x = 0, step_y = 0, step = 0, numb = 0;
  char  buff[LEN] = {0};
  
  scanf("%d", &numb);
  while (numb != 0)
  {
    scanf("\n%c%*s %d", &buff, &step);
    switch (buff[0])
    {
      case 'N': step_y += step; break;
      case 'S': step_y -= step; break;    
      case 'W': step_x -= step; break;
      case 'E': step_x += step; break;        
      default: break;       
    }
    numb--;
  }

  printf("%d %d", step_x, step_y);

  return (0);
}