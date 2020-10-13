#include <stdio.h>

int   main(void)
{
  int num = 0, res = 0, itr = 1;

  while (num != -9999)
  {
    scanf("%d", &num);
    if (num > res || itr < 2 || num == -9999) res = num;
    else { printf("%d", itr); return (0);}
    itr++;
  }

  printf("0\n");
  
  return (0);
}