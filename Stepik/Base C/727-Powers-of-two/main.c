#include <stdio.h>
#include <math.h>

int   main(void)
{  
  int nbr;
  int itr; 
  
  nbr = 0;
  itr = 1;
  scanf("%d", &nbr);
  
  if (nbr == 0)
  {
    printf("NO\n");
    return(0);
  }
  else if (nbr == 1)
  {
    printf("YES\n");
    return(0);
  }
  else
  {
    while(itr < nbr)
    {
      itr *= 2;
      if(itr == nbr)
      { 
        printf("YES\n");
        return (0);
      }  
    }
  }
  
  printf("NO\n");
  return (0);
}