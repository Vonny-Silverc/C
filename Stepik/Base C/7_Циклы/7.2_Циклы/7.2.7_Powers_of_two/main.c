#include <stdio.h>
#include <math.h>

int   main(void)
{  
  int num = 0, itr = 1; 
  
  scanf("%d", &num);
  if (num == 0) {printf("NO\n"); return(0);}
  else if (num == 1) {printf("YES\n"); return(0);}
  else
  {
    while(itr < num)
    {
      itr *= 2;
      if(itr == num) {printf("YES\n"); return (0);}  
    }
  }
  printf("NO\n");
  
  return (0);
}