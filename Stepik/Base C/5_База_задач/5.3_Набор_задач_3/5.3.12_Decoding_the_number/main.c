#include <stdio.h>

int   main(void)
{ 
  short a[4] = {0};
    
  scanf("%1hd%1hd%1hd%1hd", &a[2], &a[3], &a[0], &a[1]);
    
  for(short i = 0; i < sizeof(a) / 2; i++)
    printf("%d", (a[i] + 3) % 10);             
  printf("\n");
  
  return (0);
}