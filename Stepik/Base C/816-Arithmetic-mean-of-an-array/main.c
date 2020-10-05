#include <stdio.h>

int   main(void)
{
  int     arr_num = 0;
  double  res  = 0.00;
  
  scanf("%d", &arr_num);
  arr_num -= 1;
  int     arr_one[arr_num];

  for (int itr = 0; itr <= arr_num; itr++)
  {
    scanf("%d", &arr_one[itr]);
    res += arr_one[itr];
    if (itr == arr_num) printf("%.2lf\n", res /= (itr + 1)); 
  }
  return (0);
}