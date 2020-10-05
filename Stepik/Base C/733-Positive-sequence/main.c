#include <stdio.h>

int   main(void)
{
  int num;
  int res;
  int itr;

  num = 0;
  res = 1;
  itr = 0;
  while (num != -9999) 
  {
    scanf("%d", &num);
    num < 0 && num != -9999 ? (res = 0) : (res += 0);
    itr++;
  } 
  if (res == 0 || itr < 2)
    printf("NO\n");
  else
    printf("YES\n");
  return (0);
}