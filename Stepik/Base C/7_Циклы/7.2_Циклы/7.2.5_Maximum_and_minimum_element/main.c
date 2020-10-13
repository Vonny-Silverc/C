#include <stdio.h>

int   main(void)
{
  int num = 0, res_max = -2147483648;
  int res_min = 2147483647;

  do {
    scanf("%d", &num);
    if (num >= res_max && num != 0) res_max = num;
    if (num <= res_min && num != 0) res_min = num;
  } while(num != 0);

  if (res_min == 2147483647) printf("%d\n", res_max);
  else printf("%d %d\n", res_max, res_min);
  
  return (0);
}