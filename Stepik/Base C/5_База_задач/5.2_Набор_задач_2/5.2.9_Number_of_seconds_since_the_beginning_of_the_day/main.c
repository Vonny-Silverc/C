#include <stdio.h>

int main(void)
{
  int second = 0;
  
  scanf("%d", &second);
  printf("%d\n", second %= 3600);
  
  return(0);
}