#include <stdio.h>

int   main(void)
{
  int num = 0, res = 0, itr = 0;

  while (num != -9999)
  {
    scanf("%d", &num);
    if (num > res || itr < 2 || num == -9999) res = num;
    else { printf("NO\n"); return (0);}
    itr++;
  }

  printf("YES\n");
  
  return (0);
}